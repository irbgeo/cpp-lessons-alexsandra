#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("a = %d is the largest number\n", a);
    }

    if (b > a && b > c)
    {
        printf("b = %d is the largest number\n", b);
    }

    if (c > b && c > a)
    {
        printf("c = %d is the largest number\n", c);
    }
}
