// [1,2]

// [] [] [] []
// [] [] [] []
// [] [] [] []
// [] [] [] []
// [] [] [] []

#include <iostream>

using namespace std;

int main()
{
    int matrix[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "enter [ " << i << "; " << j << " ] ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    int maxSumLine = 0, idxMaxLine = 0;
    for (int j = 0; j < 4; j++)
    {
        maxSumLine += matrix[idxMaxLine][j];
    }

    for (int i = 1; i < 3; i++)
    {
        int lineSum = 0;
        for (int j = 0; j < 4; j++)
        {
            lineSum += matrix[i][j];
        }
        if (lineSum > maxSumLine)
        {
            maxSumLine = lineSum;
            idxMaxLine = i;
        }
    }
}
