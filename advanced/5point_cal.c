#include <stdio.h>

int main()
{
    char ac[] = {1, 2, 3, 4};
    char *p = ac;
    printf("p=%p\n", p);
    printf("p+1=%p\n", p + 1); // 加了一个sizeof(char)

    int i[] = {1, 2, 3, 10};
    int *q = i;
    printf("q=%p\n", q);
    printf("q+1=%p\n", q + 1);

    return 0;
}