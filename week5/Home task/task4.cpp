#include <iostream>
using namespace std;

int main() {
    long long number;
    int digit, checkDigit, count = 0;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: "; 
    cin >> checkDigit;
    
    while (number > 0) {
        digit = number % 10;    
        if (digit == checkDigit) {
            count++;              
        }
        number = number / 10;     
    }

    cout << "Frequency: " << count << endl;
    return 0;
}