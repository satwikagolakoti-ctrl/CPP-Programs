#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Hello\n";
    }
};

class B
{
    A obj;  

public:
    void display()
    {
        obj.show();
    }
};

int main()
{
    B b;
    b.display();

    return 0;
}
