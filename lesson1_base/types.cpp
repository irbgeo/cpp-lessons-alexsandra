#include <stdio.h>

int main()
{
    // types in c
    bool b = 0;      // 1 bytes, in C we use int for true / false: 1 is true, 0 is false
    char c = 'A';   // 1 byte,  single character 11111111 256
    int i = 1;      // 4 bytes, integer from -2147483648 to 2147483647 (about ±2.1e9)
    float f = 1.1;  // 4 bytes, from -3.4e38 to 3.4e38, smallest positive about 1.2e-38, only ~7 exact digits
    printf("bool (int):   value %d\n",  b);
    printf("char:         value %c\n",  c);
    printf("int:          value %d\n",  i);
    printf("float:        value %g\n",  f);
}
