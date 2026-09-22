// 3. Прочитать числа из файла до конца (без N) и посчитать их количество

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("./lesson7_files/example/count_input.txt");

    int count = 0;
    int x;
    while (fin >> x)
    {
        count++;
    }

    fin.close();

    cout << "count = " << count << "\n";
}
