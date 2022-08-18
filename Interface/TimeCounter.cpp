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
    const auto timeSpanSecond = interval / m_tickFreq.QuadPart; //获取秒数
    const auto timeSpanMillisecond = timeSpanSecond * 1000.0; //获取毫秒数

    ::QueryPerformanceCounter(&m_tickStart);

    return timeSpanMillisecond;
}

double TimeCounter::Elapsed()
{
    ::QueryPerformanceCounter(&m_tickEnd);
    const auto interval = static_cast<double>(m_tickEnd.QuadPart - m_tickStart.QuadPart);
    const auto timeSpanSecond = interval / m_tickFreq.QuadPart; //获取秒数
    const auto timeSpanMillisecond = timeSpanSecond * 1000.0; //获取毫秒数

    return timeSpanMillisecond;
}