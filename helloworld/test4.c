/*static 存储类*/
#include <stdio.h>

void func1();
static int count = 10;

int main()
{
    while (count--)
    {
        func1();
    }
    return 0;
}

void func1()
{
    static int i = 5;
    i++;
    printf("i = %d, count = %d\n", i, count);
}