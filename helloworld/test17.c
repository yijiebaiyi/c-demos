#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 猜数游戏，猜一个100以内的随机整数
int main()
{
    int num = 0, count = 0, value = 0;
    srand(time(0));
    num = rand() % 100 + 1;

    do
    {
        scanf("%d", &value);
        count++;
        if (value > num)
        {
            printf("大了\n");
        }
        else if (value < num)
        {
            printf("小了\n");
        }
        else
        {
            printf("猜对了，一共猜了%d次\n", count);
        }
    } while (value != num);

    return 0;
}