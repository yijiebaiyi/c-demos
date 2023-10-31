#include <stdio.h>

struct
{
    int amount;
    char *name;
} coins[] = {
    {1, "penny"},
    {5, "nickel"},
    {10, "dime"},
    {25, "quarter"},
    {50, "half-dollar"},
};

// 选择排
int main()
{
    int i;
    int key = 10;
    for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
    {
        if (coins[i].amount == key)
        {
            printf("%s\n", coins[i].name);
        }
    }
    return 0;
}

int search()
{
}