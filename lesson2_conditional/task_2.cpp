#include <stdio.h>

int main()
{
    int x = 0;
    scanf("%d", &x);

    if (x > 0)
    {
        printf("%d is positive number\n", x);
    }
    else if (x < 0)
    {
        printf("%d is negative number\n", x);
    }
    else
    {
        printf("%d is zero number\n", x);
    }
}
