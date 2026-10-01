// Реши задание 16 из 3х разных вариантов

// F(1)  =  1;
// F(n)  =  5 · F(n – 1) + 3 · n

#include <stdio.h>

int F(int n){
    if(n==1){
        return 1;
    }

    return 5*F(n-1)+3*n;
}

int main()
{
    printf("%d\n", F(4));

    return 0;
}
