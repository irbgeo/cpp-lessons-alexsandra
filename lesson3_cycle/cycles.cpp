#include <stdio.h>

int main()
{
    // for (initialization; condition; change)
    // {
    //     /* code */
    // }

    printf("for\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    // while (condition)
    // {
    //     /* code */
    // }

    printf("while\n");
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", i);
        i++;
    }

    // i = 10

    // do
    // {
    //     /* code */
    // } while (condition);

    printf("do while\n");
    i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 10);

    printf("continue and break\n");
    for (int i = 0; i < 10; i++)
    {
        if (i%2==0){
            continue;
        }

        if (i == 7){
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}
