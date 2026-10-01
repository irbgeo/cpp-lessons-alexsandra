#include <stdio.h>

int main()
{
    // in C there is no bool type: we use int, 1 is true and 0 is false
    int flag_true = 1, flag_false = 0;

    printf("flag_true = %d flag_false = %d\n", flag_true, flag_false);

    // == equal
    printf("flag_true == flag_true -> %d\n", flag_true == flag_true);
    printf("flag_false == flag_true -> %d\n", flag_false == flag_true);
    printf("1 == 1 -> %d\n", 1 == 1);
    printf("4 == 5 -> %d\n", 4 == 5);

    // != not equal
    printf("flag_true != flag_true -> %d\n", flag_true != flag_true);
    printf("flag_false != flag_true -> %d\n", flag_false != flag_true);
    printf("1 != 1 -> %d\n", 1 != 1);
    printf("4 != 5 -> %d\n", 4 != 5);

    // && AND
    // 0 && 0 -> 0
    // 1 && 0 -> 0
    // 0 && 1 -> 0
    // 1 && 1 -> 1

    printf("true && true -> %d\n", 1 && 1);
    printf("true && false -> %d\n", 1 && 0);

    // || OR
    // 0 || 0 -> 0
    // 1 || 0 -> 1
    // 0 || 1 -> 1
    // 1 || 1 -> 1

    printf("true || true -> %d\n", 1 || 1);
    printf("true || false -> %d\n", 1 || 0);
    printf("false || false -> %d\n", 0 || 0);

    // ! Not
    // !0 -> 1
    // !1 -> 0

    printf("!false  -> %d\n", !0);
    printf("!true -> %d\n", !1);

    int f1 = 1, f2 = 1;

    // !f1 || (f1 && f2)
    // f1 f2
    // 0 0 -> 1
    // 0 1 -> 1
    // 1 0 -> 0
    // 1 1 -> 1

    int cond = !f1 || (f1 && f2);

    // if (conditional) { ...conditional is true... }
    // else {...conditional is false...}

    if (!f1 || (f1 && f2))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    // if (conditional1) { ...conditional is true... }
    // else if (conditional2) {...conditional2 is true...}
    // else { both are false}

    if (!f1 || (f1 && f2))
    {
        printf("!f1 || (f1 && f2) is true\n");
    }
    else if (f1 || (f1 && f2))
    {
        printf("f1 || (f1 && f2) is false\n");
    }
    else
    {
        printf("both is false\n");
    }

    return 0;
}
