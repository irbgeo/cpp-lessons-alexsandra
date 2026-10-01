#include <stdio.h>

// 1. Вывести числа от 1 до 10
int main()
{
    int begin = 0, end = 0;
    scanf("%d %d", &begin, &end);

    // 1 OPTION
    int i = begin;
    while (i <= end)
    {
        printf("%d\n", i);
        i++;
    }

    // 2 OPTION
    for(int i = begin; i <= end; i++){
        printf("%d\n", i);
    }

    return 0;
}
