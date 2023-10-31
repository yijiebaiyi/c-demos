#include <stdio.h>

// &
// 变量取地址
int main()
{
    // int a;
    // a = 10;

    // int b;
    // b = 20;

    // printf("%p\n", &a);
    // printf("%p\n", a);
    // printf("%p\n", &b);

    // 数组类型取地址
    int a[10];
    printf("%p\n", a); // 0000007F307FF720
    // printf("%p\n", a + 1);
    printf("%p\n", &a); // 0000007F307FF720
    // printf("%p\n", &a + 1);
    printf("%p\n", &a[0]); // 0000007F307FF720
    printf("%p\n", &a[1]); // 0000007F307FF724

    return 0;
}