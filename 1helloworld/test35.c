#include <stdio.h>

// 数组运算
/*
    1. 计算数组长度
        length = sizeof(a) / sizeof(a[0]);

    2. 数组a赋值给数组b只能用遍历。
*/
int main()
{
    int a[] = {1, 2, 3, 4, 5};

    // 1. 计算数组长度
    int length;
    length = sizeof(a) / sizeof(a[0]);
    printf("length = %d, sizeof(a) = %d, sizeof(a[0]) = %d\n", length, sizeof(a), sizeof(a[0]));

    // 2. 数组遍历
    int i;
    int b[] = {0};
    for (i = 0; i < length; i++)
    {
        b[i] = a[i];
    }

    printf("i=%d, b[i]=%d\n", i, b[i]); // i = 5

    int c[5];
    printf("c[0]=%d\n", c[0]); // c[0] = 其他值
    printf("c[5]=%d\n", c[5]);
    printf("c[100]=%d\n", c[100]);

    int d[5] = {0}; // 初始化值都是0
    for (i = 0; i < sizeof(d) / sizeof(d[0]); i++)
    {
        printf("d[i]=%d\n", d[i]);
    }
    printf("d[5]=%d\n", d[5]); // 其他值
    printf("d[100]=%d\n", d[100]);

    return 0;
}