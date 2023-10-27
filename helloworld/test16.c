#include <stdio.h>

// 获取输入值的平均值，当输入-1时结束计算
int main()
{
    int count = 0, sum = 0, value = 0;

    scanf("%d", &value);
    while (value != -1)
    {
        count++;
        sum += value;
        scanf("%d", &value);
    }
    printf("%d %f\n", count, sum * 1.0 / count);

    return 0;
}