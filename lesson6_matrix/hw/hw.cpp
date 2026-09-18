// 1. Найти все элементы больше N в матрице
#include <iostream>
using namespace std;

int findElements()
{
    int N_limit = 5;

    int matrix[3][3] = {
        {1, 6, 3},
        {8, 2, 9},
        {4, 5, 7}};

    cout << "Элементы больше " << N_limit << ":\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] > N_limit)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }

    cout << "\n";

    return 0;
}

// 2. Вычислить сумму всех элементов больше заданого
int sum()
{
    int N_limit = 5;

    int matrix[3][3] = {
        {1, 6, 3},
        {8, 2, 9},
        {4, 5, 7}};

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] > N_limit)
            {
                sum += matrix[i][j];
            }
        }
    }

    cout << "Сумма всех элементов матрицы: " << sum << "\n";

    return 0;
}

// 3. Посчитать нули в матрице
int countZero()
{
    int N_limit = 5;

    int matrix[3][3] = {
        {1, 0, 3},
        {8, 2, 9},
        {0, 5, 7}};

    int zeroCount = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 0) // (!matrix[i][j])
            {
                zeroCount++;
            }
        }
    }

    cout << "Количество нулей в  матрицы: " << zeroCount << "\n";

    return 0;
}

// 4. Циклический сдвиг всех элементов
int circleShift()
{
    const int lineNumb = 5, columnNumb = 5;

    int matrix[lineNumb][columnNumb] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25},
    };

    int i = 0, j = 0;
    int currentValue = matrix[0][0];
    int store = matrix[0][0];

    do
    {
        int newJ = j + 1;
        int newI = i + newJ / columnNumb;

        newI %= lineNumb;
        newJ %= columnNumb;

        store = matrix[newI][newJ];
        matrix[newI][newJ] = currentValue;
        currentValue = store;
        i = newI;
        j = newJ;
    } while (!(i == 0 && j == 0));

    cout << "Матрица после циклического сдвига:\n";
    for (int i = 0; i < lineNumb; i++)
    {
        for (int j = 0; j < columnNumb; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// 5. Найти столбец с минимальной суммой
int minSum()
{
    int matrix[3][3] = {
        {1, 0, 3},
        {8, 2, 6},
        {9, 5, 7}};

    int min_sum = 0;
    int min_column = 0;

    for (int i = 0; i < 3; i++)
    {
        min_sum = matrix[i][0];
    }

    for (int j = 1; j < 3; j++)
    {
        int current_sum = 0;

        for (int i = 0; i < 3; i++)
        {
            current_sum += matrix[i][j];
        }

        if (current_sum < min_sum)
        {
            min_sum = current_sum;
            min_column = j;
        }
    }

    cout << "Столбец с минимальной суммой: " << min_column + 1 << "\n";

    return 0;
}

// 2. Найти максимум в матрице

int max()
{
    int matrix[3][3] = {
        {1, 0, 3},
        {8, 2, 6},
        {9, 5, 7}};

    int max = matrix[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    cout << "Максимальный элемент в матрице: " << max << "\n";

    return 0;
}

// 3. Найти минимум в матрице
int min()
{
    int matrix[3][3] = {
        {1, 0, 3},
        {8, 2, 6},
        {9, 5, 7}};

    int min = matrix[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }

    cout << "Максимальный элемент в матрице: " << min << "\n";

    return 0;
}

int main()
{
    circleShift();
}