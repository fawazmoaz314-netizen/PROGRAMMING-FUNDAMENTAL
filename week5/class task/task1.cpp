#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number to see its multiplication table: ";
    cin >> num;

    cout << endl << "Multiplication Table of " << num << ":" << endl;

    for (int i = 1; i <= 10; i = i + 1) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }

    return 0;
}