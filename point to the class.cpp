#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Hello";
    }
};

int main()
{
    A obj;
    A *ptr = &obj;

    ptr->show();

    return 0;
}
