#include <stdio.h>

int main()
{
    char in[1000];

    scanf("%s", in);

    // находим длину строки: идём до символа '\0' (в библиотеке есть готовая: strlen из <string.h>)
    int length = 0;
    while (in[length] != '\0')
    {
        length++;
    }

    char reverse[1000];
    int j = 0;
    for (int i = length - 1; i > -1; i--)
    {
        reverse[j] = in[i];
        j++;
    }
    reverse[j] = '\0'; // строка в C всегда заканчивается символом '\0'

    printf("%s\n", reverse);
}
