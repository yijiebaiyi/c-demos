#include <stdio.h>

// 变量作用域
int main()
{
    int a;
    a = 10;
    if (a > 0)
    {
        a = 5;
    }

    printf("a = %d\n", a); // a = 5

    int b;
    b = 20;
    if (b > 0)
    {
        int b;
        b = 5;
        printf("in b > 20, b = %d\n", b); // b = 5
    }

    printf("b = %d\n", b); // b = 20

    return 0;
}