#include <stdio.h>

// tic-tac-toe游戏 - 优化
// 判断棋盘上有没有人赢了。输出 1、0、-1。-1表示和局, 1表示X赢，0表示O赢了。
int main()
{
    int size = 3;
    int board[size][size];

    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    int numberX;
    int numberO;
    int yNumberX;
    int yNumberO;

    int winner = -1;
    // 遍历行
    for (i = 0; i < size; i++)
    {
        numberO = 0;
        numberX = 0;
        yNumberO = 0;
        yNumberX = 0;
        for (j = 0; j < size; j++)
        {
            if (board[i][j] == 1)
            {
                numberX++;
            }
            else
            {
                numberO++;
            }

            if (board[j][i] == 1)
            {
                yNumberX++;
            }
            else
            {
                yNumberO++;
            }
        }
        if (numberX == size || yNumberX == size)
        {
            winner = 1;
            break;
        }
        else if (numberO == size || yNumberO == size)
        {
            winner = 0;
            break;
        }
    }

    // 读取对角线 - 正对角线
    numberO = 0;
    numberX = 0;
    for (i = 0; i < size; i++)
    {
        if (board[i][i] == 1)
        {
            numberX++;
        }
        else
        {
            numberO++;
        }

        if (numberX == size)
        {
            winner = 1;
            break;
        }
        else if (numberO == size)
        {
            winner = 0;
            break;
        }
    }

    // 读取对角线 - 反对角线
    numberO = 0;
    numberX = 0;
    for (i = size; i < size; i++)
    {
        if (board[i][size - i - 1] == 1)
        {
            numberX++;
        }
        else
        {
            numberO++;
        }

        if (numberX == size)
        {
            winner = 1;
            break;
        }
        else if (numberO == size)
        {
            winner = 0;
            break;
        }
    }

    printf("winner is %d\n", winner);

    return 0;
}