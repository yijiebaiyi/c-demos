#include <stdio.h>

// 指针场景一： 多返回值
void minmax(int a[], int len, int *min, int *max);

int main()
{
    int a[10] = {3, 4, 5, 6, 2, 1, 7, 8, 9, 10};
    int len = sizeof(a) / sizeof(a[0]);
    int min, max;

    minmax(a, len, &min, &max);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }

    printf("min=%d, max=%d\n", min, max);
    return 0;
}
void minmax(int a[], int len, int *min, int *max)
{
    int i;
    *min = *max = a[0];

    for (i = 1; i < len; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }

        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
}