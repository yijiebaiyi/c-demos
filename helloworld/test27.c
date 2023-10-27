#include <stdio.h>

// 函数
void totalsum(int begin, int end)
{
    int i;
    int total = 0;
    for (i = begin; i <= end; i++)
    {
        total += i;
    }

    printf("total = %d\n", total);
}

int main()
{
    totalsum(1, 10);
    totalsum(5, 10);
    totalsum(9, 10);
    return 0;
}