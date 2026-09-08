#include <iostream>
using namespace std;

int toBinary(int number)
{
    int binaryNumber = 0, multiplier = 1;
    while (number > 0)
    {
        int bit = number % 2;
        binaryNumber = binaryNumber + bit * multiplier; 
        multiplier = multiplier * 10;
        number = number / 2;
    }
    return binaryNumber;
}

// написать функцию которая возвращает двоичную запись числа
int main()
{
    int number = 0;
    cout << "Enter count ";
    cin >> number;

    cout << toBinary(number) << "\n";

    return 0;
}
