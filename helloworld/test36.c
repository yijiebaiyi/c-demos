#include <stdio.h>

int search(int key, int arr[], int length);

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    int index = search(5, arr, length);
    printf("index = %d\n", index);

    return 0;
}

int search(int key, int arr[], int length)
{
    int ret = -1;
    for (int i = 0; i < length; i++)
    {
        if (key == arr[i])
        {
            ret = i;
            break;
        }
    }
    return ret;
}
