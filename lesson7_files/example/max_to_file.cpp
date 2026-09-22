// 4. Найти максимум среди чисел файла и записать его в output.txt

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("./lesson7_files/example/max_input.txt");

    int maxValue = 0;
    fin >> maxValue;

    int x = 0;
    while (fin >> x)
    {
        if (x > maxValue)
        {
            maxValue = x;
        }
    }

    fin.close();

    ofstream fout("./lesson7_files/example/output.txt");
    fout << maxValue << "\n";
    fout.close();

    cout << "max = " << maxValue << " (written to output.txt)\n";
}
