/*常量定义*/
#include <stdio.h>

#define LENGTH 10
#define WIDTH 20

int main()
{
    int result;
    result = LENGTH * WIDTH;
    printf("result =  %d\n", result);

    const float PI = 3.14;
    printf("PI = %f\n", PI);
}