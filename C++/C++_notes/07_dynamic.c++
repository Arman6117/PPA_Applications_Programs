#include<stdlib.h>
#include<stdio.h>
#include <iostream>
using namespace std;

class Demo
{
    public:
      int A,B;

      Demo()
      {
        cout<<"Inside Default\n";
      }
      Demo(int A,int B)
      {
        cout<<"Inside Parametrised\n";
      }
      ~Demo()
      {
        cout<<"Inside Destructor\n";
      }
} ;
int main()
{
     cout<<"Start of main\n\n";
   Demo obj1;  // Static
   Demo obj2(11,34); // Static

   Demo *p = new Demo(); // Dynamic
   Demo *q = new Demo(12,32); // Dynamic
    
   
   delete p;
   delete q;

   cout<<"End of main\n\n";
    return 0;
}