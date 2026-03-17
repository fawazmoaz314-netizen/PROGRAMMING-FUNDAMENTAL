#include <iostream>
using namespace std;

int main() {
    int number, temp, digit;
    int count = 0;

    cout << "Enter number: ";
    cin >> number;
    cout << "Enter digit: ";
    cin >> digit;

    temp = number;

    while (temp > 0) {
        int lastDigit = temp % 10;

        if (lastDigit == digit) {
            count = count + 1;
        }
        temp = temp / 10;
    }

    cout << "Frequency of " << digit << " in " << number << " is: " << count << endl;

    return 0;
}