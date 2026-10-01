#include <stdio.h>

int main()
{
    // types in c
    int b = 0;      // 4 bytes, in C we use int for true / false: 1 is true, 0 is false
    char c = 'A';   // 1 byte,  single character 11111111 256
    int i = 1;      // 4 bytes, integer
    float f = 1.1;  // 4 bytes, single-precision float

    printf("bool (int):  %zu bytes value %d\n", sizeof(b), b);
    printf("char:        %zu bytes value %c\n", sizeof(c), c);
    printf("int:         %zu bytes value %d\n", sizeof(i), i);
    printf("float:       %zu bytes value %g\n", sizeof(f), f);
}
