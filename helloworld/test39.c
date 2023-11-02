#include <stdio.h>

// 线性搜索没有效率 -> 二分搜索
int main()
{
    int arr[] = {1, 3, 4, 5, 8, 9, 10, 15, 18, 23, 28, 78};

    // 要查找的数
    // int key = 28;
    int key;
    scanf("%d", &key);

    int length = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = length - 1;

    int ret = -1;

    while (left < right)
    {
        int mid = (right + left) / 2;
        if (key == arr[mid])
        {
            ret = mid;
            break;
        }
        else if (key > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("%d\n", ret);

    return 0;
}