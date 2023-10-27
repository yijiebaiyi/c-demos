#include <stdio.h>

// 求两个时刻相差x小时y分钟
int main()
{
    int h1 = 0, h2 = 0, m1 = 0, m2 = 0, r1 = 0, r2 = 0;

    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    r1 = h2 - h1;
    r2 = m2 - m1;
    if (r2 < 0)
    {
        r1--;
        r2 = 60 + r2;
    }

    printf("差值是%d小时， %d分钟", r1, r2);
    return 1;
}