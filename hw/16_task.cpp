// Реши задание 16 из 3х разных вариантов

// F(1)  =  1;
// F(n)  =  5 · F(n – 1) + 3 · n

#include <iostream>

using namespace std;

int F(int n){
    if(n==1){
        return 1;
    }

    return 5*F(n-1)+3*n;
}

int main()
{
    cout << F(4) << "\n";

    return 0;
}