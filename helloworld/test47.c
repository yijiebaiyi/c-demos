#include <stdio.h>

// 字符运算
int main()
{
    // printf("sizeof(char)=%d\n", sizeof(char)); // sizeof(char)=1
    char c;
    // c = '65'; //warning: overflow in conversion from 'int' to 'char' changes value from '13877' to '53'
    // printf("%c", c); // 5

    c = 65;
    printf("%c\n", c); // A
    c++;
    printf("%c\n", c); // B

    // 获取两个字符之间的距离。从而可以实现大小写转化
    char a = 'a';
    char A = 'A';

    int dis = A - a;
    printf("a=%d, A=%d, A-a=%d\n", a, A, dis); // a=97, A=65, A-a=-32

    char b = 'b';
    char B = b - ('a' - 'A');

    printf("B=%d, B=%c", B, B); // B=66, B=B

    return 0;
}