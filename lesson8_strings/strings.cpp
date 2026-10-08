#include <stdio.h>
#include <string.h>

int main()
{
    char helloWorld[] = "Hello, World!";

    // strlen(s) — длина строки.
    // Идёт по символам s[0], s[1], ... и считает их, пока не встретит '\0'.
    // Сам '\0' не считается: для "Hello, World!" ответ 13.
    int len = strlen(helloWorld);

    helloWorld[0] = 'h';

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
    // хотя буквы одинаковые. Поэтому строки сравнивают по символам (strcmp).
    const char *p1 = "A";
    const char *p2 = "A";
    printf("%d\n", p1 == p2);

    // strcmp(a, b) — сравнение строк по символам.
    // Сравнивает a[0] с b[0], a[1] с b[1], ... пока символы равны и строка не кончилась.
    // На первом несовпадении возвращает число, важен только его знак
    // (часто это разница кодов a[i] - b[i], но точное значение не гарантируется):
    //   0      — строки одинаковые,
    //   меньше 0 — a раньше b по алфавиту ("A" < "B"),
    //   больше 0 — a позже b.
    printf("%d\n", strcmp("A", "A") != 0);
    printf("%d\n", strcmp("A", "B") == 0);

    char a[] = "aaaa";
    char b[] = "bbbb";

    char c[20];

    // strcpy(to, from) — копирование строки.
    // Переписывает символы from в to один за другим, потом ставит '\0' в конец.
    // Размер to не проверяется: массив должен вмещать strlen(from) + 1 символ.
    strcpy(c, a); // c = "aaaa"

    // strcat(to, from) — дописывание строки в конец.
    // Находит '\0' в конце to (как strlen) и с этого места копирует from, затем ставит '\0'.
    // Размер to тоже не проверяется: нужно место для strlen(to) + strlen(from) + 1.
    strcat(c, b); // c = "aaaabbbb"

    printf("%s\n", c);
    return 0;
}
