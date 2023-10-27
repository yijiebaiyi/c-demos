#include <stdio.h>

// 整数求逆
// 取余 %10 获取个位数
// 除以 /10 舍弃各位数
int main()
{
    int n = 0;
    int ret = 0;
    int digit = 0;

    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        // printf("%d", digit);

        ret = ret * 10 + digit;

        printf("ret=%d, digit=%d, n=%d\n", ret, digit, n);
        n = n / 10;
    }

    printf("ret=%d\n", ret);
    return 0;
}