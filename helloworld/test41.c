#include <stdio.h>

// sizeof 获取变量或者类型所占的长度
int main()
{
    int a;
    a = 10;

    printf("sizeof(a) = %ld\n", sizeof(a));
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(float) = %ld\n", sizeof(float));

    return 0;
}