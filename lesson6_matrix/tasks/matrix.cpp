// [1,2]

// [] [] [] []
// [] [] [] []
// [] [] [] []
// [] [] [] []
// [] [] [] []

#include <stdio.h>

int main()
{
    int matrix[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("enter [ %d; %d ] ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int maxSumLine = 0, idxMaxLine = 0;
    for (int j = 0; j < 4; j++)
    {
        maxSumLine += matrix[idxMaxLine][j];
    }

    for (int i = 1; i < 3; i++)
    {
        int lineSum = 0;
        for (int j = 0; j < 4; j++)
        {
            lineSum += matrix[i][j];
        }
        if (lineSum > maxSumLine)
        {
            maxSumLine = lineSum;
            idxMaxLine = i;
        }
    }
}
