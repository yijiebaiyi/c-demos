#include <stdio.h>

// 最大公约数。例：18和12 的最大公约数为6
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    // 定义初始值为2， 循环相除，同时能除过两个则+1继续，直到计算出最大数。
    int t;
    int max = 1;
    for (t = 2; t <= a && t <= b; t++)
    {
        printf("你好世界\n");
        if (a % t == 0 && b % t == 0)
        {
            max = t;
        }
    }

    printf("%d\n", max);
    return 0;
}