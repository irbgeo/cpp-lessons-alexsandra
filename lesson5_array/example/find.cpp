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

    int goal = 0;
    cout << "enter goal value ";
    cin >> goal;

    int goalIdx = -1;
    for (int idx = 0; idx < len; idx++)
    {
        if (arr[idx] == goal)
        {
            goalIdx = idx;
            break;
        }
    }

    if (goalIdx == -1)
    {
        cout << goal << " is not in array \n";
        return 0;
    }

    cout << goal << " on " << goalIdx + 1 << " place\n";
}
