#include <iostream>
using namespace std;

int main() {
    int a, b, n1, n2, gcd, lcm;

    cout << "Enter the first number: "; cin >> a;
    cout << "Enter the second number: "; cin >> b;

    n1 = a; n2 = b; 

    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }
    gcd = a;
    
    lcm = (n1 * n2) / gcd;

    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}