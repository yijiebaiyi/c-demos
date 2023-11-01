#include <stdio.h>

// 计算100内素数
int main()
{
    int x;
    int i;
    for (x = 2; x < 100; x++)
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                printf("%d\n", x);
                break;
            }
        }
    }

    return 0;
}