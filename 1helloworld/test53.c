#include <stdio.h>
#include <string.h>

// 字符串函数 标准库 string.h
// strlen  返回字符串长度，不包括结尾的0
// strcmp
// strcpy
// strcat
// strchr
// strstr
int main()
{
    // strlen
    char str[] = "hello";
    printf("strlen(str)= %d\n", strlen(str)); // 5
    printf("sizeof(str)= %d\n", sizeof(str)); // 6

    return 0;
}