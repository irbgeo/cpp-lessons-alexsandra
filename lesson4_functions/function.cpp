#include <iostream>

using namespace std;

/*type_of_return_value function_name(type_of_arg1 arg1_name,type_of_arg2 arg2_name,type_of_arg3 arg3_name)
{
    ...function body...
}
*/

// no return no args
// void function_name(){}

void outputHW()
{
    cout << "Hello, World!\n";
}

// no return 3 args
void outputArgs(int arg1, int arg2, int param)
{
    cout << "arg1 = " << arg1 << " arg2 + param = " << arg2 + param << "\n";
}

// exist return no args
int inputI()
{
    int i = 0;
    cout << "Enter i: ";
    cin >> i;

    return i;
}

// exist return 2 arg
int sum(int a, int b)
{
    return a + b;
}

int add1(int b)
{
    b++;
    return b;
}

int main()
{
    outputHW();
    outputArgs(1, 2, 4);

    // int k = 0;
    // k = inputI();

    int k = inputI();

    cout << "k = " << k << "\n";

    cout << "5+6=" << sum(5, 6) << "\n";
    cout << "7+6=" << sum(7, 6) << "\n";

    int b = 7;

    int bb = add1(b);

    cout << b << " " << bb << "\n";

    return 0;
}
