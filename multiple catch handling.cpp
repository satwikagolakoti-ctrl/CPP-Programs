#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Enter 1 for integer exception: ";
    cin >> choice;

    try
    {
        if (choice == 1)
            throw 10;
        else
            throw 'A';
    }

    catch (int x)
    {
        cout << "Integer exception caught: " << x << endl;
    }

    catch (char x)
    {
        cout << "Character exception caught: " << x << endl;
    }

    return 0;
}
