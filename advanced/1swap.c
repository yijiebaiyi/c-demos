#include <stdio.h>

// 交换变量
void swap(int *a, int *b);

int main()
{
    int a = 1;
    int b = 2;
    swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}

void swap(int *a, int *b)
{
    printf("a=%p\n", a); // a=00000000005FFE9C
    printf("*a=%d\n", *a);

    int i = 1;
    int *p = &i;
    printf("*p=%d\n", *p); // *p=1
    printf("p=%p\n", p);   // p=00000000005FFE50  p保存i的地址

    int t = *a;
    *a = *b;
    *b = t;
}
