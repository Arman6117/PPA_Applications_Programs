#include <iostream>
using namespace std;
class Demo
{
// private:
    

public:
int i;
Demo ()
{
    i = 77;
}
    void fun();
};

class Hello
{
private:
    int j;


public:

  Hello()
  {
    j = 23;
  }
    void gun();
   

    friend Demo;
};

void Demo::fun()
{
   Hello obj;
    cout << "Inside fun "<<obj.j;
}
void Hello::gun()
{
     Demo obj;
        cout << "Inside gun "<<obj.i;
    
}
int main()
{

    Hello obj;

    Demo dobj;

    dobj.fun();
    obj.gun();

    return 0;
}
