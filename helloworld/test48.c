#include <stdio.h>

// 逃逸字符
int main()
{
    // \r 回车
    // \n 换行
    // \t 制表位
    // \b 退格

    printf("hello world.\b!\n"); // hello world!

    printf("123\t12\n123\t123\t\n");

    return 0;
}