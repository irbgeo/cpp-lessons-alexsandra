#include <stdio.h>

int main()
{
    // initialization variables
    // variable_type value_name;
    char c1;
    printf("char:        %zu bytes value %c\n", sizeof(c1), c1);

    // variable_type variable_name = init_value;
    char c2 = 'B';
    printf("char:        %zu bytes value %c\n", sizeof(c2), c2);

    int v1 = 1;
    printf("v1 = %d\n", v1);

    v1 = 2;
    printf("2: value %d\n", v1);

    v1 = 1 + 1;
    printf("3: value %d\n", v1);

    v1 = 6 / 3;
    printf("v1 = 6/3 : %d\n", v1);

    v1 = 6 % 3;
    printf("v1 = 6%%3 : %d\n", v1);

    // 5/3 = 1.3333333
    v1 = 5 / 3;
    printf("v1 = 5/3 : %d\n", v1);

    v1 = 5 % 3;
    printf("v1 = 5%%3 : %d\n", v1);

    int v2 = 2, v3 = 3;

    v1 = v2;
    printf("v1 = v2 : %d\n", v1);

    v1 = v2 + v3 * 2; // 8
    printf("v1 = v2+v3*2 : %d\n", v1);

    v1 = v1 + 4;
    printf("v1 = v1+1 : %d\n", v1);

    v1 += 4; // v1 = v1 + 4
    v1 ++; // v1 = v1 + 1
    ++v1;
    v1 /=4;
}
