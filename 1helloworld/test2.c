/*使用extern*/
#include <stdio.h>

int x = 1;
int y = 2;
int addtwosum();

int main()
{
    int result;
    result = addtwosum();
    printf("result = %d\n", result);
    return 0;
}
