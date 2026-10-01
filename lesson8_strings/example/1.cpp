#include <stdio.h>

int main()
{
    char in[1000];

    scanf("%s", in);

    int count = 0;
    // идём по строке до символа '\0' (длину можно узнать через strlen из <string.h>)
    for (int i = 0; in[i] != '\0'; i++)
    {
        if (in[i] == 'a')
        {
            count++;
        }
    }

    printf("%d\n", count);
}
