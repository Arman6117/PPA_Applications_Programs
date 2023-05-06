#include <iostream>

using namespace std;

bool CheckEven(int no)
{
    if (no % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int value = 0;
    bool bRet;

    cout << "Enter a number: ";
    cin >> value;

    cout << bRet << "\n";

    bRet = CheckEven(value);

    if (bRet == true)
    {
        cout << "It is a even number";
    }
    else
    {
        cout << "Its is a odd number";
    }

    return 0;
}