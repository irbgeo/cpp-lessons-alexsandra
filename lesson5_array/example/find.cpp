#include <stdio.h>

int main()
{
    const int len = 5;

    int arr[5];

    printf("enter array ");
    for (int idx = 0; idx < len; idx++)
    {
        scanf("%d", &arr[idx]);
    }

    int goal = 0;
    printf("enter goal value ");
    scanf("%d", &goal);

    int goalIdx = -1;
    for (int idx = 0; idx < len; idx++)
    {
        if (arr[idx] == goal)
        {
            goalIdx = idx;
            break;
        }
    }

    if (goalIdx == -1)
    {
        printf("%d is not in array \n", goal);
        return 0;
    }

    printf("%d on %d place\n", goal, goalIdx + 1);
}
