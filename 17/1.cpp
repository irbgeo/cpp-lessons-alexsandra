// Файл содержит последовательность целых чисел, по модулю не превышающих 10 000. Назовём парой два идущих подряд элемента последовательности.
// Определите количество таких пар, в которых запись ровно одного элемента заканчивается цифрой 6, а сумма квадратов элементов пары меньше, чем квадрат наименьшего из элементов последовательности, запись которых заканчивается цифрой 6.
// В ответе запишите два числа: сначала количество найденных пар, затем максимальную сумму квадратов элементов этих пар.

#include <iostream>
#include <fstream>

using namespace std;

int abs(int x){
    if (x >= 0){
        return x;
    }

    return -1*x;
}

bool isTarget(int n)
{
    return abs(n) % 10 == 6;
}

int sumOfSquares(int a, int b)
{
    return a * a + b * b;
}

int findTargetNumber()
{
    ifstream fin("./17/1_in.txt");
    if (!fin.is_open())
    {
        cout << "cannot open input.txt\n";
        return 1;
    }

    int targetNumber = 0;
    bool isMetTarget = false;

    int x = 0;
    while (fin >> x)
    {
        if (isTarget(x))
        {
            if (!isMetTarget)
            {
                isMetTarget = true;
                targetNumber = x;
            }
            else if (x < targetNumber)
            {
                targetNumber = x;
            }
        }
    }

    fin.close();

    return targetNumber;
}

bool isGoodPair(int a, int b, int squareTarget)
{
    return ((isTarget(a) && !isTarget(b)) || (!isTarget(a) && isTarget(b))) && sumOfSquares(a, b) < squareTarget;
}

int main()
{
    int target = findTargetNumber();
    int squareTarget = target * target;

    ifstream fin("./17/1_in.txt");

    if (!fin.is_open())
    {
        cout << "cannot open input.txt\n";
        return 1;
    }

    int count = 0;
    int firstNumber = 0, secondNumber = 0;
    fin >> firstNumber;

    bool isMetGoodPair = false;
    int maxGoodPairSum = 0;

    while (fin >> secondNumber)
    {
        if (isGoodPair(firstNumber, secondNumber, squareTarget))
        {
            count++;
            int goodPairSum = sumOfSquares(firstNumber, secondNumber);

            if (!isMetGoodPair)
            {
                isMetGoodPair = true;
                maxGoodPairSum = goodPairSum;
            }
            else if (maxGoodPairSum < goodPairSum)
            {
                maxGoodPairSum = goodPairSum;
            }
        }

        firstNumber = secondNumber;
    }

    fin.close();

    cout << count << " " << maxGoodPairSum;
}
