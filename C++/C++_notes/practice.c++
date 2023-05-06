#include <iostream>
using namespace std;

class Demo
{
public:
    int A, B;

    Demo(int No1, int No2)
    {
        A = No1, B = No2;
    }

    void num()
    {
        cout << "Inside num:" << A<< "\n";
        cout << "Inside num:" << this->B<< "\n";
    }
};

int main()
{
    int a = 0, b = 0;

    cout << "Enter 2 numbers:\n";
    cin >> a >> b;

    Demo obj(a, b);
    obj.num();
    return 0;
}