#include <iostream>

using namespace std;

int main()
{
    int len = 0;
    cout << "enter len of array ";
    cin >> len;

    int arr[len];

    cout << "enter array ";
    for (int idx = 0; idx < len; idx++)
    {
        cin >> arr[idx];
    }

    int min = arr[0], max = arr[0];

    for (int idx = 1; idx < len; idx++)
    {
        if (min > arr[idx])
        {
            min = arr[idx];
        }
        if (max < arr[idx])
        {
            max = arr[idx];
        }
    }

    cout << "max is " << max << " min is " << min << "\n";
}
