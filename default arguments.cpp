#include <iostream>
using namespace std;

void add(int a, int b = 10)
{
    cout << "Sum = " << a + b;
}

int main()
{
    add(5);

    return 0;
}
