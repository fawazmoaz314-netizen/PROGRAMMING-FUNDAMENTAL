#include <iostream>
using namespace std;

int main() {
    int pin, i;
    int balance = 1000;
    int choice;
    int amount;

    for (i = 1; i <= 3; i++) {
        cout << "Enter PIN: ";
        cin >> pin;

        if (pin == 1234) {
            cout << " Login Successful ";
            
            do {
                cout << " 1. Check Balance ";
                cout << " 2. Deposit ";
                cout << " 3. Withdraw";
                cout << " 4. Exit";
                cout << " Enter choice:";
                cin >> choice;

                if (choice == 1) {
                    cout << " Balance: " << balance << endl;
                }
                else if (choice == 2) {
                    cout << " Enter amount: ";
                    cin >> amount;
                    balance = balance + amount;
                }
                else if (choice == 3) {
                    cout << " Enter amount: ";
                    cin >> amount;

                    if (amount <= balance) {
                        balance = balance - amount;
                    } else {
                        cout << " Insufficient Balance ";
                    }
                }
                else if (choice == 4) {
                    cout << " Thank you! ";
                }
                else {
                    cout << " Invalid choice ";
                }

            } while (choice != 4);

            break; 
        }
        else {
            cout << "Wrong PIN ";
        }
    }

    return 0;
}