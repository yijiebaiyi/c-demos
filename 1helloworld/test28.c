#include <stdio.h>

// 函数的声明和定义。
/*
    如果函数没有提前声明，后面有调用，编译会报错。
*/

int maxNumber(int a, int b);

int main()
{
    int a, b;
    a = 12;
    b = 13;
    int max = maxNumber(a, b);
    printf("max = %d\n", max);
    return 0;
}

int maxNumber(int a, int b)
{
    int max;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}