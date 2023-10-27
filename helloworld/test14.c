#include <stdio.h>

// 求输入三个值的最大值
int main()
{
    printf("请输入三个值: ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("输入的值为%d %d %d\n", a, b, c);

    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    printf("最大值为%d", max);
    return 0;
}