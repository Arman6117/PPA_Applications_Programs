#include <iostream>
using namespace std;

class Demo // Parents class
{
   public:
     int A,B;

    Demo ()
    { 
        A = 10;
        B = 20;
        cout<<"Inside Demo Constructor\n";
    }
    ~Demo ()
    {
        cout<<"Inside Demo Destructor\n";
    }
  
    void fun()
    {
        cout<<"Inside fun of Demo\n";
    }
};

// Child class
class Hello : public Demo // class Hello extends Demo
{
   public:
     int X,Y;

   Hello()
   {
     X = 30;
     Y = 40;

     cout<<"Inside Hello Constructor\n\n";
   }
   ~Hello()
   {
     cout<<"Inside Hello Destructor\n";
   }

   void gun ()
   {
    cout<<"Inside Gun of Hello\n\n";
   }
};


int main()
{
    Hello hObj;
    
    // Constructor and destuctor calling sequence

    // Constructor Top to Bottom

    // Desstructor Bottom to Top

    hObj.fun();
    hObj.gun();

    cout<<hObj.A<<"\n";
    cout<<hObj.B<<"\n";
    cout<<hObj.X<<"\n";
    cout<<hObj.Y<<"\n\n";
    return 0;
}
