// 4. Найти максимум среди чисел файла и записать его в output.txt

#include <stdio.h>

int main()
{
    FILE *fin = fopen("./lesson7_files/example/max_input.txt", "r");

    int maxValue = 0;
    fscanf(fin, "%d", &maxValue);

    int x = 0;
    while (fscanf(fin, "%d", &x) == 1)
    {
        if (x > maxValue)
        {
            maxValue = x;
        }
    }

    fclose(fin);

    FILE *fout = fopen("./lesson7_files/example/output.txt", "w");
    fprintf(fout, "%d\n", maxValue);
    fclose(fout);

    printf("max = %d (written to output.txt)\n", maxValue);
}
