#include <iostream>

using namespace std;

// 2. Таблица умножения для числа N
int main()
{
    int N = 0;
    cin >> N;

    if (N<1 || N > 9){
        cout << "Invalid value\n";
        return 1;
    }

    for (int i = 1; i <= 9; i++)
    {
        cout << i << " x " << N << " = " << i*N << "\n";
    }

    return 0;
}
