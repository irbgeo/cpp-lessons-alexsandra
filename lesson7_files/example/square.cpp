// 1. Прочитать первое число из файла и вывести его квадрат

#include <stdio.h>

int main()
{
    FILE *fin = fopen("./lesson7_files/example/square_input.txt", "r");

    int x;
    fscanf(fin, "%d", &x);

    fclose(fin);

    printf("%d^2 = %d\n", x, x * x);
}
