#include <iostream>

using namespace std;

// 1. Вывести числа от 1 до 10
int main()
{
    int begin = 0, end = 0;
    cin >> begin >> end;

    // 1 OPTION
    int i = begin;
    while (i <= end)
    {
        cout << i << "\n";
        i++;
    }

    // 2 OPTION
    for(int i = begin; i <= end; i++){
        cout << i << "\n";
    }

    return 0;
}
