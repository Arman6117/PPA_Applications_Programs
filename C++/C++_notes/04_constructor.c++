#include <iostream>
using namespace std;

class Demo
{
public:
    int no1;
    int no2;

    Demo() // Default constructor
    {
        cout << "Inside Default constructor\n";
        no1 = 23;
        no2 = 12;
    }

    Demo(int A, int B) // Parametrised constructor
    {
        cout << "Inside Parametrised constructor\n";
        no1 = A; // 67
        no2 = B; // 34
    }

    Demo(Demo &ref) // Copy constructor
    {
        cout << "Inside Copy constructor\n";
        no1 = ref.no1;
        no2 = ref.no2;
    }
    ~Demo() // ~ tilda operator
    {
        cout << "Inside Destructor\n";
    }

    void fun()
    {
        cout << "Inside fun\n";
    }

    void gun()
    {
        cout << "Inside gun\n";
    }
};

int main()
{
    cout << "Inside main\n";
    Demo obj1;

    // obj1.fun();
    // obj1.gun();

    cout << "Value of no1 from obj1 is: " << obj1.no1 << "\n";

    cout << "Value of no2 from obj1 is: " << obj1.no2 << "\n\n";

    Demo obj2(67, 34);
    cout << "Value of no1 from obj2 is: " << obj2.no1 << "\n";

    cout << "Value of no2 from obj2 is: " << obj2.no2 << "\n\n";

    Demo obj3(obj2);
 cout << "Value of no1 from obj3 is: " << obj3.no1 << "\n";

    cout << "Value of no2 from obj3 is: " << obj3.no2 << "\n\n";
    return 0;
}
