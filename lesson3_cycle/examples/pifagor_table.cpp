#include <stdio.h>

int main()
{
    int N = 0;
    scanf("%d", &N);

    if (N < 1 || N > 9)
    {
        printf("Invalid value\n");
        return 1;
    }

    for (int i = 0; i <= N; i++){
        if (i==0){
            printf("\t");
            continue;
        }
        printf("%d\t", i);
    }
    printf("\n");

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (j == 0){
                printf("%d\t", i);
                continue;
            }
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}
