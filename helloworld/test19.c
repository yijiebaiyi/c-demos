#include <stdio.h>

// 判断输入的数是不是素数（质数）
int main()
{
    int num;
    scanf("%d", &num);

    int i;
    int isPrime = 1;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}