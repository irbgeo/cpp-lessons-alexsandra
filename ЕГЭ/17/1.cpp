// Файл содержит последовательность целых чисел, по модулю не превышающих 10 000. Назовём парой два идущих подряд элемента последовательности.
// Определите количество таких пар, в которых запись ровно одного элемента заканчивается цифрой 6, а сумма квадратов элементов пары меньше, чем квадрат наименьшего из элементов последовательности, запись которых заканчивается цифрой 6.
// В ответе запишите два числа: сначала количество найденных пар, затем максимальную сумму квадратов элементов этих пар.

#include <stdio.h>

// модуль числа (в библиотеке есть готовая: abs из <stdlib.h>)
int abs(int x){
    if (x >= 0){
        return x;
    }

    return -1*x;
}

// 1 - да, 0 - нет
int isTarget(int n)
{
    return abs(n) % 10 == 6;
}

int sumOfSquares(int a, int b)
{
    return a * a + b * b;
}

int findTargetNumber()
{
    FILE *fin = fopen("./17/1_in.txt", "r");
    if (fin == NULL)
    {
        printf("cannot open input.txt\n");
        return 1;
    }

    int targetNumber = 0;
    int isMetTarget = 0;

    int x = 0;
    while (fscanf(fin, "%d", &x) == 1)
    {
        if (isTarget(x))
        {
            if (!isMetTarget)
            {
                isMetTarget = 1;
                targetNumber = x;
            }
            else if (x < targetNumber)
            {
                targetNumber = x;
            }
        }
    }

    fclose(fin);

    return targetNumber;
}

int isGoodPair(int a, int b, int squareTarget)
{
    return ((isTarget(a) && !isTarget(b)) || (!isTarget(a) && isTarget(b))) && sumOfSquares(a, b) < squareTarget;
}

int main()
{
    int target = findTargetNumber();
    int squareTarget = target * target;

    FILE *fin = fopen("./17/1_in.txt", "r");

    if (fin == NULL)
    {
        printf("cannot open input.txt\n");
        return 1;
    }

    int count = 0;
    int firstNumber = 0, secondNumber = 0;
    fscanf(fin, "%d", &firstNumber);

    int isMetGoodPair = 0;
    int maxGoodPairSum = 0;

    while (fscanf(fin, "%d", &secondNumber) == 1)
    {
        if (isGoodPair(firstNumber, secondNumber, squareTarget))
        {
            count++;
            int goodPairSum = sumOfSquares(firstNumber, secondNumber);

            if (!isMetGoodPair)
            {
                isMetGoodPair = 1;
                maxGoodPairSum = goodPairSum;
            }
            else if (maxGoodPairSum < goodPairSum)
            {
                maxGoodPairSum = goodPairSum;
            }
        }

        firstNumber = secondNumber;
    }

    fclose(fin);

    printf("%d %d", count, maxGoodPairSum);
}
