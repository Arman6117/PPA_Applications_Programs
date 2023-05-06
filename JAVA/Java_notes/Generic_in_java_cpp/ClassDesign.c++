#include <iostream>
using namespace std;

class ArrayX
{
private:
    int *Arr;
    int iSize;

public:
    ArrayX(int Length)
    {
        cout << "Inside constructor\n";
        iSize = Length;
        Arr = new int[iSize];
    }
    ~ArrayX()
    {
        cout << "Inside destructor\n";
        delete[] Arr;
    }
    void Accept()
    {
        cout << "Enter the values: "
             << "\n";
        for (int i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }
    void Display()
    {
        cout<<"Elements of array are: "<<"\n";
        for (int i = 0; i < iSize; i++)
        {
            cout<<Arr[i]<<"\n";
        }
        
    }

    int Addition()
    {
        int iSum =0;
        for (int i = 0; i < iSize; i++)
        {
            iSum += Arr[i];
        }
        return iSum;
    }
};

int main()
{

    ArrayX obj1(6);
    ArrayX obj2(4);

    obj1.Accept();
    obj1.Display();

    obj2.Accept();
    obj2.Display();

    int iRet = 0;
    iRet = obj1.Addition();
    cout<<"Sum of elements of obj1 is: "<<iRet<<"\n";
    
    iRet = obj2.Addition();
    cout<<"Sum of elements of obj2 is: "<<iRet<<"\n";

    return 0;
}
