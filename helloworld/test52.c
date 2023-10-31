#include <stdio.h>

// 字符串指针和初始化
int main()
{
    char str[] = {};

    // 常见错误
    char buffer[100] = ""; // 这是一个空字符串， buffer[0] == '\0'

    char buffer2[] = ""; // 这个字符串长度为1， 放不下任何字符

    printf("buffer[0]=%c##\n", buffer);
}