#include <stdio.h>

// длина строки: считаем символы до '\0' (в библиотеке есть готовая: strlen из <string.h>)
int length(char s[])
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}

// сравнение строк по символам (в библиотеке есть готовая: strcmp из <string.h>): 0, если строки одинаковые
int compare(const char a[], const char b[])
{
    int i = 0;
    while (a[i] != '\0' && a[i] == b[i])
    {
        i++;
    }
    return a[i] - b[i];
}

// копирование строки from в to (в библиотеке есть готовая: strcpy из <string.h>)
void copy(char to[], char from[])
{
    int i = 0;
    while (from[i] != '\0')
    {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
}

// дописывание строки from в конец строки to (в библиотеке есть готовая: strcat из <string.h>)
void append(char to[], char from[])
{
    int start = length(to);
    int i = 0;
    while (from[i] != '\0')
    {
        to[start + i] = from[i];
        i++;
    }
    to[start + i] = '\0';
}

int main()
{
    char helloWorld[] = "Hello, World!";
    int len = length(helloWorld);

    printf("%s\n", helloWorld);
    printf("len: %d\n", len);
    printf("first element is %c\n", helloWorld[0]);
    printf("last element is %c\n", helloWorld[len - 1]);

    for (int i = 0; i < len; i++)
    {
        printf("%c", helloWorld[i]);
    }

    printf("\n");

    // Знак == для строк сравнивает НЕ буквы, а адреса в памяти (указатели).
    // Две строки "A" могут лежать в разных местах памяти, тогда ответ 0,
    // хотя буквы одинаковые. Поэтому строки сравнивают по символам (compare).
    const char *p1 = "A";
    const char *p2 = "A";
    printf("%d\n", p1 == p2);
    printf("%d\n", compare("A", "A") != 0);
    printf("%d\n", compare("A", "B") == 0);

    char a[] = "aaaa";
    char b[] = "bbbb";

    char c[20];
    copy(c, a);
    append(c, b);

    printf("%s\n", c);
    return 0;
}
