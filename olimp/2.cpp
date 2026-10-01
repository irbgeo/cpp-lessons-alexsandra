#include <stdio.h>

// модуль числа (в библиотеке есть готовая: abs из <stdlib.h>)
int abs(int x)
{
    if (x >= 0)
    {
        return x;
    }

    return -1 * x;
}

int main()
{
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            if ((i == r1 && j == c1) || (i == r2 && j == c2))
            {
                printf("S");
                continue;
            }

            int dist1 = abs(i - r1) + abs(j - c1);
            int dist2 = abs(i - r2) + abs(j - c2);

            int target_r = r1;
            int target_c = c1;
            if (dist2 < dist1)
            {
                target_r = r2;
                target_c = c2;
            }

            if (i > target_r)
            {
                printf("^");
            }
            else if (i < target_r)
            {
                printf("v");
            }
            else if (j > target_c)
            {
                printf("<");
            }
            else if (j < target_c)
            {
                printf(">");
            }
        }

        printf("\n");
    }

    return 0;
}
