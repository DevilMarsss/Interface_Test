#include "public.h"

// 以微秒单位等待一段时间
LONGLONG UsSleep(int us)
{
    LARGE_INTEGER freq;

    if (QueryPerformanceFrequency(&freq))
    {
        LARGE_INTEGER run, priv, curr;
        run.QuadPart = freq.QuadPart * us / 1000000; // 转换为微妙
        QueryPerformanceCounter(&priv);

        do
        {
            QueryPerformanceCounter(&curr);
        }
        while (curr.QuadPart - priv.QuadPart < run.QuadPart);

        curr.QuadPart -= priv.QuadPart;
        LONGLONG nRes = (curr.QuadPart * 1000000 / freq.QuadPart);
        return nRes;

    }

    return -1;
}
