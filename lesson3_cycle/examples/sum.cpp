#include <iostream>

using namespace std;

// Сумма чисел от 1 до N
int main()
{
    int N = 0;
    cin >> N;

    if (N<1){
        cout << "Invalid value\n";
        return 1;
    }

    int sum = 1;
    for (int i = 2; i <= N; i++)
    {
        sum += i;
    }

    cout << sum << "\n";

    return 0;
}
