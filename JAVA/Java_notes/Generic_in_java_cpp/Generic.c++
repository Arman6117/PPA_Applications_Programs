#include <iostream>
using namespace std;

int Addition(int i, int j)
{
    int result = 0;
    result = i + j;
    return result;
}
float AdditionF(float i, float j)
{
    float result = 0;
    result = i + j;
    return result;
}
double AdditionD(double i, double j)
{
    double result = 0;
    result = i + j;
    return result;
}
int main()
{

    int i;
    float f;
    double d;

    i = Addition(10, 11);
    cout << i << "\n";

    f = AdditionF(10.7f, 89.5f);
    cout << f << "\n";

    d = AdditionD(10.8, 70.8);
    cout << d << "\n";

    return 0;
}