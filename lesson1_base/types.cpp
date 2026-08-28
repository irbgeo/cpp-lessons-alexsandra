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

    // initialization variables
    // variable_type value_name;
    char c1;
    cout << "char:        " << sizeof(c1) << " bytes value " << c1 << "\n";

    // variable_type variable_name = init_value;
    char c2 = 'B';
    cout << "char:        " << sizeof(c2) << " bytes value " << c2 << "\n";

    int v1 = 1;
    cout << "v1 = " << v1 << "\n";

    v1 = 2;
    cout << "2: value " << v1 << "\n";

    v1 = 1 + 1;
    cout << "3: value " << v1 << "\n";

    v1 = 6 / 3;
    cout << "v1 = 6/3 : " << v1 << "\n";

    v1 = 6 % 3;
    cout << "v1 = 6%3 : " << v1 << "\n";

    // 5/3 = 1.3333333
    v1 = 5 / 3;
    cout << "v1 = 5/3 : " << v1 << "\n";

    v1 = 5 % 3;
    cout << "v1 = 5%3 : " << v1 << "\n";

    int v2 = 2, v3 = 3;

    v1 = v2;
    cout << "v1 = v2 : " << v1 << "\n";

    v1 = v2 + v3 * 2; // 8
    cout << "v1 = v2+v3*2 : " << v1 << "\n";

    v1 = v1 + 4;
    cout << "v1 = v1+1 : " << v1 << "\n";
}
