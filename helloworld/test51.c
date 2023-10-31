#include <stdio.h>

// 字符串输入输出
// 1. scanf 读入一个单词，直到遇到空格、tab、回车为止
// 2. scanf 是不安全的，不知道要输入内容的长度
int main()
{
    char *str1 = "hello";
    char str3[] = "hello";
    char *str2;
    // str2 = str3; // 相同地址
    str2 = str1;                                             // 也是相同地址
    printf("str1=%p, str2=%p, str3=%p\n", str1, str2, str3); // 相同，指向同一个地址

    char input[8];
    char input2[8];
    // scanf("%s", input);
    // scanf("%s", input2);
    // 输入 hello world
    // 输出:
    // input=hello##
    // input2=world##

    // 1. char *input 这种指针类型，scanf接收程序会错误并终止
    // 2. char input[8] scanf接收输入的超过8个字符，发生数组越界（肉眼看到的7个，8个实际是包括了'\0'）

    // 解决
    scanf("%7s", input);  // 最多读7个
    scanf("%3s", input2); // 最多读3个

    // scanf("%7s", input);  跟空格无关了，不是根据空格区分单词了。而是根据个数。
    // 输入：
    // 123456789
    // 输出：
    // input=1234567##
    // input2=89##
    printf("input=%s##\n", input);
    printf("input2=%s##\n", input2);

    return 0;
}