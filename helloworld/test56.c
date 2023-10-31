#include <stdio.h>
#include <string.h>

// strchr 字符在字符串中第一次出现的位置
// strrchr 字符在字符串最后一次出现的位置
// strstr 一个字符串中查找指定子字符串（目标字符串）的第一次出现位置，并返回一个指向该位置的指针。
int main()
{
    char str[] = "hello world";
    char *p = strchr(str, 'l');
    char *p1 = strrchr(str, 'l');
    char *p2 = strrchr(str, 'p');

    printf("%s\n", p);  // llo world
    printf("%s\n", p1); // ld
    printf("%s\n", p2); // null

    const char *haystack = "This is a simple example.";
    const char *needle = "simple";

    // 使用strstr函数查找子字符串d
    char *result = strstr(haystack, needle);
    printf("%s\n", result); // simple example

    if (result)
    {
        printf("子字符串 '%s' 在源字符串中的位置：%ld\n", needle, result - haystack);
    }
    else
    {
        printf("未找到子字符串 '%s'\n", needle);
    }
    return 0;
}