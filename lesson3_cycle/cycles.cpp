#include <iostream>

using namespace std;

int main()
{
    // for (initialization; condition; change)
    // {
    //     /* code */
    // }

    cout << "for\n";
    for (int i = 0; i < 10; i++)
    {
        cout << i << "\n";
    }

    // while (condition)
    // {
    //     /* code */
    // }

    cout << "while\n";
    int i = 0;
    while (i < 10)
    {
        cout << i << "\n";
        i++;
    }

    // i = 10

    // do
    // {
    //     /* code */
    // } while (condition);

    cout << "do while\n";
    i = 0;
    do
    {
        cout << i << "\n";
        i++;
    } while (i < 10);
}
