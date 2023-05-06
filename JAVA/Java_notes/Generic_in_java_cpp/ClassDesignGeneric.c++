#include <iostream>
using namespace std;
template <class T>

class ArrayX
{
private:

    T *Arr;
    int iSize;

public:

    ArrayX(int Length)
    {
        cout << "Inside constructor\n";
        iSize = Length;
        Arr = new T[iSize];
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
    T Addition()
    {
        T iSum =0;
        for (int i = 0; i < iSize; i++)
        {
            iSum += Arr[i];
        }
        return iSum;
    }
};

int main()
{

    ArrayX <int> obj1(6);
    ArrayX <float> obj2(4);
    ArrayX <double> obj3(5);

    obj1.Accept();
    obj1.Display();

    obj2.Accept();
    obj2.Display();

    int iRet = 0;
    float fRet = 0.0f;

    iRet = obj1.Addition();
    cout<<"Sum of elements of obj1 is: "<<iRet<<"\n";
    
    fRet = obj2.Addition();
    cout<<"Sum of elements of obj2 is: "<<fRet<<"\n";

    return 0;
}
