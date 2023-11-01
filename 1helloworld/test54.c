#include <stdio.h>
#include <string.h>

// strcmp
// 注意 strcmp不一定返回-1 和 1。这取决于编译器。
// 例如：strcmp("abc", "Abc") 返回有可能为0， 有可能为32（即'a'-'A'）
// strcmp(s1, s2) 当返回小于0， 表示s1 < s2, 当返回大于0，表示s1 > s2, 返回等于0，表示相等
int main(int argc, char const *argv[])
{
    char str1[] = "abc";
    char str2[] = "abc";
    // printf("%d\n", str1 == str2); // 0 数组比较永远是false, 不是相同地址

    char str3[] = "abc";
    printf("%d\n", strcmp(str1, str2)); // 0 表示 str1 = str2

    char str4[] = "bbc";
    printf("%d\n", strcmp(str1, str4)); // -1 表示 abc < bbc

    char str5[] = "Abc";
    printf("%d\n", strcmp(str1, str5));   // 1, 即 abc > Abc
    printf("'a'=%d, 'A'=%d\n", 'a', 'A'); // 'a'=97, 'A'=65

    printf("abc-Abc=%d\n", strcmp("abc", "Abc"));

    return 0;
}