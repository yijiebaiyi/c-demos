#include <stdio.h>

// 获取x元金额用1毛两毛5毛，打印所有组合
int main()
{
    int x;
    scanf("%d", &x);

    int one, two, five;

    for (one = 1; one <= x * 10; one++)
    {
        for (two = 1; two <= x * 10 / 2; two++)
        {
            for (five = 1; five <= x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("%d元 = %d个1毛%d个两毛%d个5毛\n", x, one, two, five);
                    goto out; // 匹配一次直接结束
                }
            }
        }
    }
out:
    printf("结束了");
    return 0;
}