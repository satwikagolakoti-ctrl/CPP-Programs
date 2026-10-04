#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "This is Parent class";
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "\nThis is Child class";
    }
};

int main() {
    Child c;
    c.show();
    c.display();

    return 0;
}
