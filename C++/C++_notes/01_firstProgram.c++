#include <iostream>

using namespace std;

class addition
{
public:
    int A;
    int B;
    int result;

    int Add(int n1, int n2)
    {
        int ans;
        ans = n1 + n2;
    //    cout << "Addition is: " << obj1.result;
    }
};

int main()
{
    addition obj1;
    obj1.A = 0, obj1.B = 0, obj1.result = 0;

    cout << "Enter Two numbers: ";
    cin >> obj1.A >> obj1.B;

    obj1.result = obj1.Add(obj1.A, obj1.B);

   

    return 0;
}