#include <iostream>
using namespace std;

int strlenX(char str[])
{
   int iCnt = 0;

   while (*str != '\0')
   {
    iCnt++;
    str++;
   }
   return iCnt;
}
int main()
{
 char arr[20];
 int iRet =0;
 cout<<"Enter name: " ;
 cin>>arr;

 iRet = strlenX(arr);
 cout<<"Length of string is: "<<iRet;
return 0;
}
