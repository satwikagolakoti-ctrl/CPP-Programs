#include <iostream>
using namespace std;

inline int square(int x)
{
    return x * x;
}
int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << "Square: " << square(5) << endl;
    cout << "Sum of 2 numbers: " << add(2, 3) << endl;
    cout << "Sum of 3 numbers: " << add(2, 3, 4);

    return 0;
}
