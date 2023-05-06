#include <iostream>
using namespace std;

class Arithmatics 
{
    private:
       int no1;
       int no2;

    public:
       Arithmatics()
       {
          no1 = 0;
          no2 = 0;
    
       }
      
      Arithmatics(int A,int B)
      {
        no1 = A;
        no2 = B;
      }

      int add()
      {
        int ans = 0;
        ans = no1+no2;
        return ans;
      }

      int sub()
      {
        int ans = 0;
        ans = no1-no2;
        return ans;
      }

};

int main ()
{
    
    Arithmatics obj1(10,90);
    Arithmatics obj2;

    int ret = 0;

    ret = obj1.add();

    cout<<"Addition is: "<<ret<<"\n";
   
   ret = obj2.sub();

   cout<<"Subtraction is: "<<ret<<"\n";

  //  cout<<"Value of no1 "<<obj1.no1<<"\n";
    return 0;
}



// Class = Charecteristic + Behaviours
// Class = Data + Functions