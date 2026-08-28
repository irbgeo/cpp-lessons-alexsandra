#include <iostream>

using namespace std;

int main()
{
    bool flag_true = true, flag_false = false;

    cout << "flag_true = " << flag_true << " flag_false = " << flag_false << "\n";

    // == equal
    cout << "flag_true == flag_true -> " << (flag_true == flag_true) << "\n";
    cout << "flag_false == flag_true -> " << (flag_false == flag_true) << "\n";
    cout << "1 == 1 -> " << (1 == 1) << "\n";
    cout << "4 == 5 -> " << (4 == 5) << "\n";

    // != not equal
    cout << "flag_true != flag_true -> " << (flag_true != flag_true) << "\n";
    cout << "flag_false != flag_true -> " << (flag_false != flag_true) << "\n";
    cout << "1 != 1 -> " << (1 != 1) << "\n";
    cout << "4 != 5 -> " << (4 != 5) << "\n";

    // && AND
    // 0 && 0 -> 0
    // 1 && 0 -> 0
    // 0 && 1 -> 0
    // 1 && 1 -> 1

    cout << "true && true -> " << (true && true) << "\n";
    cout << "true && false -> " << (true && false) << "\n";

    // || OR
    // 0 || 0 -> 0
    // 1 || 0 -> 1
    // 0 || 1 -> 1
    // 1 || 1 -> 1

    cout << "true || true -> " << (true || true) << "\n";
    cout << "true || false -> " << (true || false) << "\n";
    cout << "false || false -> " << (false || false) << "\n";

    // ! Not
    // !0 -> 1
    // !1 -> 0

    cout << "!false  -> " << (!false) << "\n";
    cout << "!true -> " << (!true) << "\n";

    bool f1 = true, f2 = true;

    // !f1 || (f1 && f2)
    // f1 f2
    // 0 0 -> 1
    // 0 1 -> 1
    // 1 0 -> 0
    // 1 1 -> 1

    bool cond = !f1 || (f1 && f2);

    // if (conditional) { ...conditional is true... }
    // else {...conditional is false...}

    if (!f1 || (f1 && f2))
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    // if (conditional1) { ...conditional is true... }
    // else if (conditional2) {...conditional2 is true...}
    // else { both are false}

    if (!f1 || (f1 && f2))
    {
        cout << "!f1 || (f1 && f2) is true\n";
    }
    else if (f1 || (f1 && f2))
    {
        cout << "f1 || (f1 && f2) is false\n";
    }
    else
    {
        cout << "both is false\n";
    }

    return 0;
}
