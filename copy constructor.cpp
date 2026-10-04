#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
    }

    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s1(101, "Ravi");
    Student s2 = s1;

    cout << "Original Object:" << endl;
    s1.display();

    cout << "\nCopied Object:" << endl;
    s2.display();

    return 0;
}
