#include <stdio.h>

// 字符 char
int main()
{
    if ('A' == 65)
    {
        printf("'A' == 65\n");
    }

    char a = 'a';
    printf("'a'=%d\n", a); // 'a'=97

    // int b;
    // b = printf("%d", 1);
    // printf("b=%d\n", b);

    char input;
    scanf("%c", &input);         // 输入 1
    printf("input=%c\n", input); // input=1
    printf("input=%d\n", input); // input=49

    int input2;
    scanf("%d", &input2);          // 输入 49
    printf("input2=%c\n", input2); // input2=1
    printf("input2=%d\n", input2); // input2=49
    return 0;
}