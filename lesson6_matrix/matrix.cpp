// [1,2]

// [] [] [] []
// [] [] [*] []
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

    printf("\n");

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
