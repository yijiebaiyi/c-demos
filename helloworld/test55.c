#include <stdio.h>
#include <string.h>

// strcpy 不安全
// strcat 不安全
// strncpy 安全
// strncat 安全
// strncmp 比较前n个字符
int main()
{
    char dst[50];
    char src[] = "Hello";

    strcpy(dst, src);
    printf("%s\n", dst);

    printf("strcat : %s\n", strcat(dst, "world"));

    char dst2[3] = {};
    char src2[] = "Hello";
    strncpy(dst2, src2, 2);
    printf("dst2= %s\n", dst2); // dst2= He

    char name[] = {"Chinanet"}, destin[20] = {};
    strncpy(destin, name, 3);
    printf("%s\n", destin); // Chi

    char hello[] = "hello";
    printf("%s\n", strncat(hello, "world", 2)); // hellowo

    printf("%d\n", strncmp("abc", "abd", 2)); // 0

    return 0;
}