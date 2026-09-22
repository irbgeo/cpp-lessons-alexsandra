// input.txt:
// 5
// 10 20 30 40 50

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    cout << -16 % 10;
    // 1. чтение до конца файла, пока числа не закончатся
    ifstream fileInAll("./lesson7_files/input.txt");

    if (!fileInAll.is_open())
    {
        cout << "cannot open input.txt\n";
        return 1;
    }

    int count = 0;
    int sum = 0;
    int value;
    while (fileInAll >> value)
    {
        count++;
        sum += value;
    }

    cout << "numbers in file: " << count << ", sum: " << sum << "\n";

    fileInAll.close();

    // 2. чтение известного количества: сначала N, потом N чисел
    ifstream finN("./lesson7_files/input.txt");

    if (!finN.is_open())
    {
        cout << "cannot open input.txt\n";
        return 1;
    }

    int n;
    finN >> n;

    int sumN = 0;
    count = 0;
    while (finN >> value && count != n)
    {
        count++;
        sumN += value;
    }

    if (n > count)
    {
        cout << "expected: " << n << " have: " << count << "\n";
    }
    cout << "n = " << n << ", sum of n numbers = " << sumN << "\n";

    finN.close();

    // 3. запись результата в файл
    ofstream fout("./lesson7_files/output.txt");
    fout << sumN << "\n";
    fout.close();

    cout << "result written to output.txt\n";
}
