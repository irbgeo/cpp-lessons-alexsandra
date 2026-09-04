#include <iostream>
using namespace std;

//1. Функция sayHello() - выводит "Hello!"
void sayHello()
{
    cout << "Hello!"<<"\n";
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

//4. Функция isPrime(int n) - проверка простого числа
int isPrime(int n)
{
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0){
            return false;
        }
    }

    return true;
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
int abs(int x){
    if (x >= 0){
        return x;
    }

    return -1*x;
}

int main()
{
    sayHello();

    cout << "2. " << add(10, 5) << "\n";

    cout << "3. " << multiply(10, 5) << "\n";

    cout << "4. " << isPrime(13) << "\n";

    cout << "5. " << factorial(5) << "\n";

    cout << "6. " << gcd(24, 18) << "\n";

    return 0;
}
