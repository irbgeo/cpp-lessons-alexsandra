#include <stdio.h>

/*type_of_return_value function_name(type_of_arg1 arg1_name,type_of_arg2 arg2_name,type_of_arg3 arg3_name)
{
    ...function body...
}
*/

// no return no args
// void function_name(){}

void outputHW()
{
    printf("Hello, World!\n");
}

// no return 3 args
void outputArgs(int arg1, int arg2, int param)
{
    printf("arg1 = %d arg2 + param = %d\n", arg1, arg2 + param);
}

// exist return no args
int inputI()
{
    int i = 0;
    printf("Enter i: ");
    scanf("%d", &i);

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

    printf("k = %d\n", k);

    printf("5+6=%d\n", sum(5, 6));
    printf("7+6=%d\n", sum(7, 6));

    int b = 7;

    int bb = add1(b);

    printf("%d %d\n", b, bb);

    return 0;
}
