#include <iostream>
using namespace std;

class Father {
public:
    void showFather() {
        cout << "This is Father class\n";
    }
};

class Mother {
public:
    void showMother() {
        cout << "This is Mother class\n";
    }
};

class Child : public Father, public Mother {
};

int main() {
    Child c;

    c.showFather();
    c.showMother();

    return 0;
}
