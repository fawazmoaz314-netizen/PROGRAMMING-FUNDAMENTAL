#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number (0-100): ";
    cin >> num;

    if (num < 0 || num > 100) {
        cout << "invalid number" << endl;
    } 
    else if (num == 0) {
        cout << "zero" << endl;
    } 
    else if (num == 100) {
        cout << "one hundred" << endl;
    } 
    else if (num >= 11 && num <= 19) {
        if (num == 11) cout << "eleven" << endl;
        else if (num == 12) cout << "twelve" << endl;
        else if (num == 13) cout << "thirteen" << endl;
        else if (num == 14) cout << "fourteen" << endl;
        else if (num == 15) cout << "fifteen" << endl;
        else if (num == 16) cout << "sixteen" << endl;
        else if (num == 17) cout << "seventeen" << endl;
        else if (num == 18) cout << "eighteen" << endl;
        else if (num == 19) cout << "nineteen" << endl;
    } 
    else {
        int tens = num / 10;
        int ones = num % 10;

        if (tens == 2) cout << "twenty";
        else if (tens == 3) cout << "thirty";
        else if (tens == 4) cout << "forty";
        else if (tens == 5) cout << "fifty";
        else if (tens == 6) cout << "sixty";
        else if (tens == 7) cout << "seventy";
        else if (tens == 8) cout << "eighty";
        else if (tens == 9) cout << "ninety";
        else if (tens == 1) cout << "ten"; 

        if (tens >= 2 && ones > 0) {
            cout << " ";
        }

        if (ones == 1) cout << "one";
        else if (ones == 2) cout << "two";
        else if (ones == 3) cout << "three";
        else if (ones == 4) cout << "four";
        else if (ones == 5) cout << "five";
        else if (ones == 6) cout << "six";
        else if (ones == 7) cout << "seven";
        else if (ones == 8) cout << "eight";
        else if (ones == 9) cout << "nine";

        cout << endl;
    }

    return 0;
}