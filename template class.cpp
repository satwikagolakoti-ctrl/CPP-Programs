#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    T a, b;

public:
    Calculator(T x, T y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "Sum = " << a + b << endl;
    }
};

int main()
{
    Calculator<int> c1(10, 20);
    c1.display();

    Calculator<float> c2(10.5, 20.5);
    c2.display();

    return 0;
}
