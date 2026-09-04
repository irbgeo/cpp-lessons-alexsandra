//1. Функция sayHello() - выводит "Hello!"
#include <iostream>
using namespace std;

void sayHello()
{
    cout << "Hello!"<<"\n";
}
//2. Функция add(int a, int b) - возвращает сумму
int add(int a, int b)
{
    return(a + b);
}
//3. Функция multiply(int a, int b)
int multiply(int a, int b)
{
    return(a * b);
}
//4. Функция isPrime(int n) - проверка простого числа
int isPrime(int n)
{
   
    if (n <= 0) {
        return false;
    }
    for (int i = 2; i * i <= n;i++) {
        return true;
    }
}


//5. Функция factorial(int n) - вычисление факториала
int factorial(int n)
{
    
    if (n < 0) {
        return 0;
    }
    int result = 1;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
    return result;
}

//6. Функция gcd(int a, int b) - НОД через алгоритм Евклида

int gcd(int a, int b) {


    while (a!= 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}




//7. Функция абсолютное значение abs(int x)

//int abs(int x)

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
