#include <iostream>
using namespace std;

template <class T1, class T2>
class Display
{
    T1 a;
    T2 b;

public:
    Display(T1 x, T2 y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "First value: " << a << endl;
        cout << "Second value: " << b << endl;
    }
};

int main()
{
    Display<int, float> d1(10, 20.5);
    d1.show();

    Display<char, int> d2('A', 100);
    d2.show();

    return 0;
}
