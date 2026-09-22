// 1. Прочитать первое число из файла и вывести его квадрат

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("./lesson7_files/example/square_input.txt");

    int x;
    fin >> x;

    fin.close();

    cout << x << "^2 = " << x * x << "\n";
}
