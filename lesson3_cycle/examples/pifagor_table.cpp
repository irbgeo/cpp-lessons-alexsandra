#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;

    if (N < 1 || N > 9)
    {
        cout << "Invalid value\n";
        return 1;
    }

    for (int i = 0; i <= N; i++){
        if (i==0){
            cout << "\t";
            continue;
        }
        cout << i << "\t";
    }
    cout << "\n";

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            if (j == 0){
                cout << i << "\t";
                continue;
            }
            cout << i * j << "\t";
        }
        cout << "\n";
    }

    return 0;
}
