#ifndef __TIME_COUNTER_H__
#define __TIME_COUNTER_H__

#include <windows.h>

class TimeCounter
{
public:
    TimeCounter();
    ~TimeCounter();

    void Start();
    double Restart();
    double Elapsed();

    TimeCounter(const TimeCounter &rhs) = delete;
    TimeCounter &operator=(const TimeCounter &rhs) = delete;

private:
    LARGE_INTEGER						m_tickFreq;
    LARGE_INTEGER						m_tickStart;
    LARGE_INTEGER						m_tickEnd;
};

#endif // !__TIME_COUNTER_H__
