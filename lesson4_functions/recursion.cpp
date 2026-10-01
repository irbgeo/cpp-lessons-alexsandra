#include <stdio.h>

// 1 1 2 3 5 8 Fibonacci

int fibonacci(int n)
{
    if (n < 1)
    {
        return -1;
    }

    if (n == 1 || n == 2)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    printf("%d\n", fibonacci(6));

    return 0;
}
