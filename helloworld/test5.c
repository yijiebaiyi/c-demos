/*判断*/
#include <stdio.h>

int main()
{
    int v;
    printf("please input a number:");
    scanf("%d", &v);

    (v % 2 == 0) ? printf("even") : printf("odd");
}