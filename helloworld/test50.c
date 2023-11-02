#include <stdio.h>

// 字符串字面量
/*
    双引号括起来的叫字符串字面量或者字符串常量
    1. 字符串实际是一个常量，存储在代码端，操作系统控制只读，不能被修改。
*/
int main()
{
    char *str = "hello world";
    char *str2 = "hello world";
    // str[0] = 'B'; // 会出错

    int a = 1;
    printf("&a=%p\n", &a);
    printf("%p\n", str);
    printf("%p\n", str2);

    // 修改字符串
    char str3[] = "hello world";
    str3[0] = 'B';
    printf("%s\n", str3); // Bello world

    // 数组 or 指针？
    /*
        构造字符串 -> 数组
            字符串就在这里，作为本地变量，空间会被自动回收
        处理字符串 -> 指针
            处理参数，动态分配空间
    */

    return 0;
}