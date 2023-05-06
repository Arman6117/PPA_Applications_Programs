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
class Hello  // class Hello extends Demo
{
   public:
     int X,Y;

   Hello()
   {
     X = 30;
     Y = 40;

     cout<<"Inside Hello Constructor\n";
   }
   ~Hello()
   {
     cout<<"Inside Hello Destructor\n";
   }

   void gun ()
   {
    cout<<"Inside Gun of Hello\n";
   }
};

class PPA : public Hello,public Demo// class Hello extends Demo
{
   public:
     int I,J;

   PPA()
   {
     I = 50;
     J = 60;

     cout<<"Inside PPA Constructor\n\n";
   }
   ~PPA()
   {
     cout<<"Inside PPA Destructor\n";
   }

   void sun ()
   {
    cout<<"Inside Sun of PPA\n\n";
   }
};


int main()
{ 
   cout<<"Inside Main\n\n";

    cout<<"Size of Demo: "<<sizeof(Demo)<<"\n";
    cout<<"Size of Hello: "<<sizeof(Hello)<<"\n";
    cout<<"Size of PPA: "<<sizeof(PPA)<<"\n\n";

    PPA pObj;
    
 
    pObj.fun();
    pObj.gun();
    pObj.sun();

    cout<<pObj.A<<"\n";
    cout<<pObj.B<<"\n";
    cout<<pObj.X<<"\n";
    cout<<pObj.Y<<"\n";
    cout<<pObj.I<<"\n";
    cout<<pObj.J<<"\n\n";

     cout<<"End of Main\n\n";
    return 0;
}
