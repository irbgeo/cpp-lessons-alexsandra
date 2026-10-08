// Реши задание 16 из 3х разных вариантов

#include <stdio.h>

// F(1)  =  1;
// F(n)  =  5 · F(n – 1) + 3 · n
int F1(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return 5 * F1(n - 1) + 3 * n;
}

int main()
{
    int count = 0;
    int f = 0;
    for (int n = 1; n <= 1134567004; n++)
    {
        // (a + b) % 3 == (a % 3 + b) % 3
        f = (f + n) % 3;
        if (n >= 237567892 && f != 0)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
