#include <iostream>
using namespace std;

class A
{
public:
    virtual void show()
    {
        cout << "Base class";
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "Derived class";
    }
};

int main()
{
    A *ptr;
    B obj;

    ptr = &obj;
    ptr->show();

    return 0;
}
