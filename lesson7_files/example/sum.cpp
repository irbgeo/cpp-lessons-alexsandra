// 2. Прочитать N, затем N чисел из файла, найти их сумму

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("./lesson7_files/example/sum_input.txt");

    int n;
    fin >> n;

    int sum = 0;
    for (int idx = 0; idx < n; idx++)
    {
        int x;
        fin >> x;
        sum += x;
    }

    fin.close();

    cout << "sum = " << sum << "\n";
}
