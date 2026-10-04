#include <iostream>
using namespace std;

class Student
{
private:
    int marks = 90;

public:
    void show()
    {
        cout << "Marks = " << marks;
    }
};

int main()
{
    Student s;
    s.show();

    return 0;
}
