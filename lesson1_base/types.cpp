#include <stdio.h>

int main()
{
    // types in c
    bool b = 0;      // 1 bytes, in C we use int for true / false: 1 is true, 0 is false
    char c = 'A';   // 1 byte,  single character 11111111 256
    int i = 1;      // 4 bytes, integer
    float f = 1.1;  // 4 bytes, single- 
    printf("bool (int):   value %d\n",  b);
    printf("char:         value %c\n",  c);
    printf("int:          value %d\n",  i);
    printf("float:        value %g\n",  f);
}
