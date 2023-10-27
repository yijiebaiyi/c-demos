#include <stdio.h>

// 辗转相除法计算最大公约数 （ a、b）
/*
    1. 如果b等于0, 则最大公约数为a;
    2. 计算a对b的余数t（即：a%b = t）, 让a=b, b=t, 继续进行步骤1;
*/
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int t = 0;
    while (b != 0)
    {
        printf("你好世界\n");
        t = a % b;
        a = b;
        b = t;
    }

    printf("%d\n", a);

    return 0;
}