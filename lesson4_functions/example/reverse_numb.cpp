#include <iostream>

using namespace std;

// Функция reverseNumber(int n) - перевернуть число

int reverseNumb(int n)
{
    if (n < 0)
    {
        return -1;
    }

    // 456 -> 654
    // 0
    // 0*10 + 6 = 6
    // 6*10 + 5 = 65
    // 65*10+4 = 654
    int reverseNumb = 0;
    while (n != 0)
    {
        int tmp = n % 10;
        reverseNumb = reverseNumb*10 + tmp;
        n /= 10;
    }

    return reverseNumb;
}

int main()
{
    cout << reverseNumb(456);

    return 0;
}
