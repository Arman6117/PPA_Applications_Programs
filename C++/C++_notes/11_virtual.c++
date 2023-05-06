#include <iostream>
using namespace std;
class Base
{
public:
    int A, B;
    // Base address from text
    virtual void Fun() // 1000
    {
        cout << "Inside Fun of Base\n";
    }

    virtual void Gun() // 2000
    {
        cout << "Inside Gun of Base\n";
    }

    virtual void Sun() // 3000
    {
        cout << "Inside Sun of Base\n";
    }
};
class Derived : public Base
{ // 16 bytes : // 8 bytes
public:
    int X, Y;

    void Fun() // 4000
    {
        cout << "Inside Fun of Derived\n";
    }

    void Gun() // 5000
    {
        cout << "Inside Gun of Derived\n";
    }

    void Sun() // 6000
    {
        cout << "Inside Sun of Derived\n";
    }
};
int main()
{

    // Derived dObj;

    // dObj.Fun();
    // dObj.Gun();
    // dObj.Sun();

 Base *bp = new Derived;
  cout<<"Size of base "<<sizeof(Base)<<'\n';

  bp->Fun();
  bp->Gun();
  bp->Sun();

    return 0;
}
