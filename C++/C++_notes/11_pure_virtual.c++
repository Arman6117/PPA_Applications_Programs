#include <iostream>
using namespace std;

class Base
{
public:
    int A, B;

    int Add(int i, int j)
    {
        return i + j;
    }

    virtual int Sub(int i, int j)
    {
        return i - j;
    }

    virtual int Multi(int i, int j) = 0; // Abstract Function
};
class Derived : public Base
{
public:
    int X, Y;

    int Sub(int i, int j)
    {
        int ans = 0;
        ans = i - j;
        return ans;
    }
    int Multi(int i, int j)
    {
        return i * j;
    }
};
int main()
{

    //    Base bobj; Not allowed

    Base *bp = new Derived;
    int ret = 0;

    ret = bp->Add(10, 11); // Base
    cout << "Addition is: " << ret << "\n";

    ret = bp->Sub(10, 11); // Derived
    cout << "Subtraction is: " << ret << "\n";

    ret = bp->Multi(10, 11); // Derived
    cout << "Multiplication is: " << ret << "\n";

    return 0;
}

