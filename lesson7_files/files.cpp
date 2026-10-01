// input.txt:
// 5
// 10 20 30 40 50

#include <stdio.h>

int main()
{

    printf("%d", -16 % 10);
    // 1. чтение до конца файла, пока числа не закончатся
    FILE *fileInAll = fopen("./lesson7_files/input.txt", "r");

    if (fileInAll == NULL)
    {
        printf("cannot open input.txt\n");
        return 1;
    }

    int count = 0;
    int sum = 0;
    int value;
    while (fscanf(fileInAll, "%d", &value) == 1)
    {
        count++;
        sum += value;
    }

    printf("numbers in file: %d, sum: %d\n", count, sum);

    fclose(fileInAll);

    // 2. чтение известного количества: сначала N, потом N чисел
    FILE *finN = fopen("./lesson7_files/input.txt", "r");

    if (finN == NULL)
    {
        printf("cannot open input.txt\n");
        return 1;
    }

    int n;
    fscanf(finN, "%d", &n);

    int sumN = 0;
    count = 0;
    while (fscanf(finN, "%d", &value) == 1 && count != n)
    {
        count++;
        sumN += value;
    }

    if (n > count)
    {
        printf("expected: %d have: %d\n", n, count);
    }
    printf("n = %d, sum of n numbers = %d\n", n, sumN);

    fclose(finN);

    // 3. запись результата в файл
    FILE *fout = fopen("./lesson7_files/output.txt", "w");
    fprintf(fout, "%d\n", sumN);
    fclose(fout);

    printf("result written to output.txt\n");
}
