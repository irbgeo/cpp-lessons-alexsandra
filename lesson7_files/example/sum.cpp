// 2. Прочитать N, затем N чисел из файла, найти их сумму

#include <stdio.h>

int main()
{
    FILE *fin = fopen("./lesson7_files/example/sum_input.txt", "r");

    int n;
    fscanf(fin, "%d", &n);

    int sum = 0;
    for (int idx = 0; idx < n; idx++)
    {
        int x;
        fscanf(fin, "%d", &x);
        sum += x;
    }

    fclose(fin);

    printf("sum = %d\n", sum);
}
