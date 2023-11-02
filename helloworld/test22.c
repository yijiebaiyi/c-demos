#include <stdio.h>

// 求前n项和， 1 + 1/2 + 1/3 + ... + 1/n
int main()
{
    int n;
    scanf("%d", &n);

    int i;
    float sum;
    for (i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }

    printf("%f\n", sum);
    return 0;
}