#include <stdio.h>

void swap(int *first, int *second)
{
    int tmp = *first;
    *first = *second;
    *second = tmp;
}

int maxFrom3(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }

    if (b > a && b > c)
    {
        return b;
    }

    return c;
}

int minFrom3(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }

    if (b < a && b < c)
    {
        return b;
    }

    return c;
}

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
    {
        swap(&a, &b);
    }

    if (c > d)
    {
        swap(&c, &d);
    }

    printf("%d", maxFrom3(a, c, minFrom3(a + c, b, d)));
}
