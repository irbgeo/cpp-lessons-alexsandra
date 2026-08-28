#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    cin >> x;

    if (x > 0)
    {
        cout << x << " is positive number\n";
    }
    else if (x < 0)
    {
        cout << x << " is negative number\n";
    }
    else
    {
        cout << x << " is zero number\n";
    }
}
