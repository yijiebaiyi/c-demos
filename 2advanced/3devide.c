#include <stdio.h>

// 指针场景二：所有结果的值都有意义，需要返回状态。指针来返回结果。
int devide(int a, int b, int *result); // 出错返回0 正确返回1， result接收结果
int main()
{
    int a = 10;
    int b = 3;
    int res;
    int status = devide(a, b, &res);
    printf("status=%d\n", status);
    printf("res=%d\n", res);

    return 0;
}
int devide(int a, int b, int *result)
{
    int ret = 1;
    if (b == 0)
    {
        ret = 0;
    }
    else
    {
        *result = a / b;
    }
    return ret;
}