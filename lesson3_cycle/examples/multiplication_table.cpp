#include <stdio.h>

// 2. Таблица умножения для числа N
int main()
{
    int N = 0;
    scanf("%d", &N);

    if (N<1 || N > 9){
        printf("Invalid value\n");
        return 1;
    }

    for (int i = 1; i <= 9; i++)
    {
        printf("%d x %d = %d\n", i, N, i*N);
    }

    return 0;
}
