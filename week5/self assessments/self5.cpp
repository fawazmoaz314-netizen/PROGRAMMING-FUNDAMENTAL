#include <iostream>
using namespace std;

int main() {
    string name = "";
    while (name != "END") {
        cout << "Enter a name: ";
        cin >> name;

        if (name != "END") {
            cout << "Hello " << name << endl;
        }
    }

    cout << "END" << endl;
    return 0;
}