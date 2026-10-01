#include <stdio.h>

//1. Функция sayHello() - выводит "Hello!"
void sayHello()
{
    printf("Hello!\n");
}

//2. Функция add(int a, int b) - возвращает сумму
int add(int a, int b)
{
    return a + b;
}

//3. Функция multiply(int a, int b)
int multiply(int a, int b)
{
    return a * b;
}

//4. Функция isPrime(int n) - проверка простого числа (1 - простое, 0 - нет)
int isPrime(int n)
{
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0){
            return 0;
        }
    }

    return 1;
}


//5. Функция factorial(int n) - вычисление факториала
int factorial(int n)
{
    if (n < 0) {
        return 0;
    }

    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

//6. Функция gcd(int a, int b) - НОД через алгоритм Евклида
int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

// 7. Функция абсолютное значение abs(int x)
// (в библиотеке есть готовая: abs из <stdlib.h>)
int abs(int x){
    if (x >= 0){
        return x;
    }

    return -1*x;
}

int main()
{
    sayHello();

    printf("2. %d\n", add(10, 5));

    printf("3. %d\n", multiply(10, 5));

    printf("4. %d\n", isPrime(13));

    printf("5. %d\n", factorial(5));

    printf("6. %d\n", gcd(24, 18));

    return 0;
}
