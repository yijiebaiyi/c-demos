#include <stdio.h>

int max(int a, int b);

// 函数参数传递
int main()
{
    printf("max_value = %d\n", max(10.0, 20)); // 20
    printf("max_value = %d\n", max(10.1, 10)); // 10

    float a = 10.1;
    printf("max_value = %d\n", max(a, 10)); // 10

    return 0; // 0 操作系统$? 可以接收到。
}

int max(int a, int b)
{

    // 1个return  单一出口原则
    int max;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}