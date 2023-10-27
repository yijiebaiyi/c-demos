#include <stdio.h>

// switch case
// 1. case常量只能为整数。
// 2. case常量可以为常数或常数表达式。
// 3. C99支持const定义的常量。
// 4. 注意：case只是程序跳转的入口，并不会阻止程序继续执行。只有break才可以打断继续执行。
int main()
{
    int type = 0;
    printf("Enter the type of fruit: ");
    scanf("%d", &type);

    switch (type)
    {
    case 1:
    case 2:
        printf("apple\n");
        break;
    case 3:
        printf("banana\n");
    case 4:
        printf("orange\n");
        break;
    default:
        printf("unknown\n");
        break;
    }

    return 0;
}