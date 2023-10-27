#include <stdio.h>

int main()
{
    printf("请输入一个金额（元）:");
    int v = 0;
    scanf("%d", &v);

    int r = 0;
    r = 100 - v;
    printf("找您%d元。\n", r);
}