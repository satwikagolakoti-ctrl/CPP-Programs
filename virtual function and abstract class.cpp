#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
public:
    void area()
    {
        float r = 5;
        cout << "Circle Area = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        int l = 5, b = 4;
        cout << "Rectangle Area = " << l * b << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;

    c.area();
    r.area();

    return 0;
}
