#include <stdio.h>

int main()
{
    printf("Input x: ");

    int x = 0;
    scanf("%d", &x);
    
    int sq = x*x;
    printf("x^2 = %d\n", sq);
}
