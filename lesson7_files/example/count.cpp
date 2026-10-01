// 3. Прочитать числа из файла до конца (без N) и посчитать их количество

#include <stdio.h>

int main()
{
    FILE *fin = fopen("./lesson7_files/example/count_input.txt", "r");

    int count = 0;
    int x;
    while (fscanf(fin, "%d", &x) == 1)
    {
        count++;
    }

    fclose(fin);

    printf("count = %d\n", count);
}
