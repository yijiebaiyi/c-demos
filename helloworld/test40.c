#include <stdio.h>

// 选择排序
/*
    1. 找出数组中的最大值。
    2. 将数组中最大值放在最后（和最后一个值交换）
    3. 数组长度减一，重复步骤1和2，直到数组长度为0.
*/

// ** 如果函数实现在调用代码之后，一定要先声明。

// 交换数组中的两个值
void swap(int index1, int index2, int arr[]);

// 求出数组中的最大值
int maxNumberIndex(int arr[], int length);

int main()
{
    int arr[] = {1, 3, 2, 5, 38, 12, 22, 3, 34, 99, 34, 44, 55, 23, 83, 12, 4};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = length - 1; i >= 0; i--)
    {
        int maxIndex = maxNumberIndex(arr, i + 1);
        swap(i, maxIndex, arr);
    }

    for (int i = 0; i < length; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }

    return 0;
}

void swap(int index1, int index2, int arr[])
{
    int x;
    x = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = x;
}

int maxNumberIndex(int arr[], int length)
{
    // int max = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < length; i++)
    {
        if (arr[maxIndex] < arr[i])
        {
            maxIndex = i;
        }
    }

    return maxIndex;
}
