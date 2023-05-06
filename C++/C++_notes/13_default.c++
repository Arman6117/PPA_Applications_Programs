#include <iostream>
using namespace std;

float Area(float Radius,float PI = 3.14f)
{
    float Ans = 0.0f;

    Ans = PI * Radius *Radius;

    return Ans;
}
int main()
{
  
  float r = 0.0f;
  float fRet = 0.0f;
  cout<<"Enter the radius: ";
  cin>>r;

  fRet = Area(r);

  cout<<"Area of circle is: "<<fRet<<"\n";
 
return 0;
}
