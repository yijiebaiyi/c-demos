#include <stdio.h>

// 构建素数表，快速查找某个数字范围内的素数
int main()
{
    const int maxNumber = 25;
    int isPrime[maxNumber];
    int i;
    int x;

    for (i = 0; i < maxNumber; i++)
    {
        isPrime[i] = 1;
    }
    for (x = 2; x < maxNumber; x++)
    {
        if (isPrime[x] == 1)
        {
            for (i = 2; i * x < maxNumber; i++)
            {
                isPrime[i * x] = 0;
            }
        }
    }

    for (i = 2; i < maxNumber; i++)
    {
        if (isPrime[i])
        {
            printf("%d\t", i);
        }
    }

    return 0;
}