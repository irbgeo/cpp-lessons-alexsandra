#include <stdio.h>

// Сумма чисел от 1 до N
int main()
{
    int N = 0;
    scanf("%d", &N);

    if (N<1){
        printf("Invalid value\n");
        return 1;
    }

    int sum = 1;
    for (int i = 2; i <= N; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
