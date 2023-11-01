#include <stdio.h>

// 函数中的数组（实际是个指针）
int main()
{
    // 这几种原型是等价的。
    /*
        int sum(int[]);
        int sum(int a[]);
        int sum(int a[10]);
        int sum(int *a);
        int sum(int *, int);
    */

    // 数组变量是特殊的指针
    // 1. 数组变量本身表达地址
    int a[10];
    int *p = a;
    // 2. 数组的单元表达变量，需要用&取地址。
    a == &a[0];

    return 0;
}