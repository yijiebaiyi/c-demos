#include <stdio.h>

// 分解整数， 例如： 13425 变为 1 3 4 2 5
/*
    1. 计算出数字的位数，
    2. 然后循环获取最高位数 ( 例： 13425最高位是1， 通过13425/10000 获得 )
*/
int main()
{
    int x, t;
    scanf("%d", &x);
    // x = 134205;
    int mask = 1;

    t = x;
    while (t > 9)
    {
        mask *= 10;
        t /= 10;
    }

    do
    {
        int i;
        i = x / mask;
        printf("%d", i);
        x %= mask;
        mask /= 10;
        if (mask > 0)
        {
            printf("#");
        }
        // printf("mask=%d, x=%d, i=%d\n", mask, x, i);
    } while (mask > 0);

    return 0;
}