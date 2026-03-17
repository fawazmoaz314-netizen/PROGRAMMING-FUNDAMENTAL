#include <iostream>
using namespace std;

int main() {
    int n1, n2, a, b, gcd, lcm;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    a = n1;
    b = n2;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (n1 * n2) / gcd;

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    cout << "LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;

    return 0;
}