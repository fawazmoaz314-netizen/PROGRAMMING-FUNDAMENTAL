#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    while (true) {
        cout << "\n--- Simple Calculator ---" << endl;
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Clear Screen\n6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 6) {
            cout << "Exiting Calculator. Goodbye!" << endl;
            break; 
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: "; cin >> a;
            cout << "Enter second number: "; cin >> b;

            if (choice == 1) cout << "Result: " << a + b << endl;
            else if (choice == 2) cout << "Result: " << a - b << endl;
            else if (choice == 3) cout << "Result: " << a * b << endl;
            else if (choice == 4) {
                if (b != 0) cout << "Result: " << a / b << endl;
                else cout << "Error: Division by zero!" << endl;
            }
        } 
        else if (choice == 5) cout << "Screen cleared." << endl;
        else cout << "Invalid choice!" << endl;
    }
    return 0;
}