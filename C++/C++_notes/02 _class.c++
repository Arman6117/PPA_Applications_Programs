#include <iostream>
using namespace std;

class Demo 
{
    public: // Access specifiere
     
      int no1;
      int no2;

      void fun ()
      {
         cout<<"Inside fun\n";
      }

};

int main ()
{
    Demo obj1;
    Demo obj2;

    obj1.no1 = 10;
    obj1.no2 = 20;

    obj2.no1 = 30;
    obj2.no2 = 40;

    obj1.fun();

    cout<<obj1.no1<<"\n";

    return 0;
}



// Class = Charecteristic + Behaviours
// Class = Data + Functions