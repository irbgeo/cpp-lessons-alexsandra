#include <iostream>

using namespace std;

void output(int *arr, int len)
{
    for (int idx = 0; idx < len; idx++)
    {
        cout << *(arr + idx) << "\n";
    }

    cout << "\n";
}

int main()
{
    int len = 3;
    int arr[len];
    // arr[idx] <- обращение к элементу с индексом idx индекс от 0 до len-1

    output(arr, len);

    // 1 по элементно

    arr[0] = 10;
    arr[2] = 10;

    output(arr, len);

    for (int idx = 0; idx < len; idx++)
    {
        cout << idx << ": enter value ";
        cin >> arr[idx];
    }

    output(arr, len);

    int arr1[10] = {3, 2, 1};

    output(arr1, 10);

    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8};

    output(arr2, 8);
}
