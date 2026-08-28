#include <iostream>

using namespace std;

int main()
{
    // types in c++
    bool b = false; // 1 byte,  true / false 000000001
    char c = 'A';   // 1 byte,  single character 11111111 256
    int i = 1;      // 4 bytes, integer
    float f = 1.1;  // 4 bytes, single-precision float

    cout << "bool:        " << sizeof(b) << " bytes value " << b << "\n";
    cout << "char:        " << sizeof(c) << " bytes value " << c << "\n";
    cout << "int:         " << sizeof(i) << " bytes value " << i << "\n";
    cout << "float:       " << sizeof(f) << " bytes value " << f << "\n";
}
