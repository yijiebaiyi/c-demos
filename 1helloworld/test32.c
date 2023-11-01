#include <stdio.h>

// 二维数组
int main()
{
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    // 行可以为空，列不能为空
    int b[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    int c[3][5];

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            c[i][j] = i * j;
        }
    }

    printf("%d\n", a[0][0]);
    printf("%d\n", a[0][1]);
    printf("%d\n", a[0][2]);
    printf("%d\n", a[1][0]);

    return 0;
}