#include <stdio.h>

// 输入任意数量[0,9]范围内数字。统一每一种数字出现次数，输入-1表示结束。
int main()
{
    const int NUMBER = 10;
    int num;
    int count[NUMBER];
    int i;
    for (i = 0; i < NUMBER; i++)
    {
        count[i] = 0;
    }

    scanf("%d", &num);
    while (num != -1)
    {
        if (num <= 9 && num >= 0)
        {
            count[num]++;
        }
        scanf("%d", &num);
    }

    for (i = 0; i < NUMBER; i++)
    {
        printf("%d:%d\n", i, count[i]);
    }

    return 0;
}