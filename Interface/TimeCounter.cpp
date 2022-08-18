#include "TimeCounter.h"

TimeCounter::TimeCounter()
    : m_tickFreq()
    , m_tickStart()
    , m_tickEnd()
{
    ::QueryPerformanceFrequency(&m_tickFreq);
}

TimeCounter::~TimeCounter()
{

}

void TimeCounter::Start()
{
    ::QueryPerformanceCounter(&m_tickStart);
}

double TimeCounter::Restart()
{
    ::QueryPerformanceCounter(&m_tickEnd);
    const auto interval = static_cast<double>(m_tickEnd.QuadPart - m_tickStart.QuadPart);
    const auto timeSpanSecond = interval / m_tickFreq.QuadPart; //��ȡ����
    const auto timeSpanMillisecond = timeSpanSecond * 1000.0; //��ȡ������

    ::QueryPerformanceCounter(&m_tickStart);

    return timeSpanMillisecond;
}

double TimeCounter::Elapsed()
{
    ::QueryPerformanceCounter(&m_tickEnd);
    const auto interval = static_cast<double>(m_tickEnd.QuadPart - m_tickStart.QuadPart);
    const auto timeSpanSecond = interval / m_tickFreq.QuadPart; //��ȡ����
    const auto timeSpanMillisecond = timeSpanSecond * 1000.0; //��ȡ������

    return timeSpanMillisecond;
}