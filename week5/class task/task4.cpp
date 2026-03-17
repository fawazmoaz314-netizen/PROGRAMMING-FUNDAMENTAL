#include <iostream>
using namespace std;
int main() {
    int maxStars;
    cout << "Enter the maximum number of stars (peak): ";
    cin >> maxStars;
    for (int i = 1; i <= maxStars; i = i + 1) {
        for (int j = 1; j <= i; j = j + 1 ) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = maxStars - 1; i >= 1; i = i - 1) {
        for (int j = 1; j <= i; j = j + 1 ) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}