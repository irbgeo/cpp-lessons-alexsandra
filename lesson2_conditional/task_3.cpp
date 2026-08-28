#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "a = " << a << " is the largest number\n";
    }

    if (b > a && b > c)
    {
        cout << "b = " << b << " is the largest number\n";
    }

    if (c > b && c > a)
    {
        cout << "c = " << c << " is the largest number\n";
    }
}
