/*变量声明和定义*/
#include <stdio.h>

// 函数外定义变量
int x;
int y;

int addtwonum()
{
    // 函数内声明变量
    extern int x;
    extern int y;

    x = 1;
    y = 2;
    return x + y;
}

int main()
{
    int result;
    result = addtwonum();
    printf("result = %d\n", result);
    return 0;
}