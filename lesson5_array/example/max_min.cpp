#include <stdio.h>

int main()
{
    int len = 0;
    printf("enter len of array ");
    scanf("%d", &len);

    int arr[len];

    printf("enter array ");
    for (int idx = 0; idx < len; idx++)
    {
        scanf("%d", &arr[idx]);
    }

    int min = arr[0], max = arr[0];

    for (int idx = 1; idx < len; idx++)
    {
        if (min > arr[idx])
        {
            min = arr[idx];
        }
        if (max < arr[idx])
        {
            max = arr[idx];
        }
    }

    printf("max is %d min is %d\n", max, min);
}
