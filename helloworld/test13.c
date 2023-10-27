#include <stdio.h>

// 计算一个数的长度
int main()
{
    int n = 0, i = 0;
    printf("请输入一个数：");
    scanf("%d", &n);
    while (n > 0)
    {
        i++;
        n = n / 10;

        printf("n=%d\n, i=%d\n", n, i);
    }

    printf("该数的长度为：%d\n", i);
}