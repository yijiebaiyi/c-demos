#include <stdio.h>

// 字符串变量和常量
/*
    1. c语言中的字符串是以字符数组形式存在的。
    2. 不能对字符串做运算。
    3. 可以来遍历。
*/
int main()
{
    // 字符串最后, 编译器会自动补充一个字节'\0'用来标志字符串结束
    char *str = "hello";
    char str1[] = "hello";
    char str2[20] = "hello";

    printf("str=%s, str1=%s, str2=%s\n", str, str1, str2);
    printf("length str1=%d\n", sizeof(str1) / sizeof(str1[0])); // length str1=6

    // 连接两个字符串
    // 法1
    printf("春宵一刻值千金,"
           "花有清香月有阴\n");

    // 法2
    printf("春宵一刻值千金,\
花有清香月有阴\n");

    return 0;
}