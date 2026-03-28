#include <iostream>
using namespace std;

int main() {
   
    float change[4];
    float totalDue;
    
   
    cout << "Enter quarters: ";
    cin >> change[0];
    cout << "Enter dimes: ";
    cin >> change[1];
    cout << "Enter nickels: ";
    cin >> change[2];
    cout << "Enter pennies: ";
    cin >> change[3];

    
    cout << "Enter the total amount due: $";
    cin >> totalDue;

   
    float totalInPocket = (change[0] * 0.25) +  (change[1] * 0.10) +    (change[2] * 0.05) +    (change[3] * 0.01);

   
    if (totalInPocket >= totalDue) {
        cout << "Can you pay the amount? Yes" << endl;
    } else {
        cout << "Can you pay the amount? No" << endl;
    }

    return 0;
}