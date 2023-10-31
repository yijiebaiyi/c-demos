#include <stdio.h>

int main()
{
    // scanf 有无空格
    int i;
    char c;
    // scanf("%d %c", &i, &c); // 输入12 1
    // printf("%d %c %d", i, c, ); // 输出12 1 49
    scanf("%d%c", &i, &c);       // 输入12 1
    printf("%d %c %d", i, c, c); // 输出12  32 （空格ascll码是32）
    return 0;
}