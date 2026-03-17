#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "\n--- Restaurant Management System ---" << endl;
        cout << "1. View Food Menu" << endl;
        cout << "2. Place Order" << endl;
        cout << "3. View Order Status" << endl;
        cout << "4. Generate Bill" << endl;
        cout << "5. Contact Staff" << endl;
        cout << "6. Exit" << endl;
        
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 1) {
            cout << "You selected: View Food Menu." << endl;
        } 
        else if (choice == 2) {
            cout << "You selected: Place Order." << endl;
        } 
        else if (choice == 3) {
            cout << "You selected: View Order Status." << endl;
        } 
        else if (choice == 4) {
            cout << "You selected: Generate Bill." << endl;
        } 
        else if (choice == 5) {
            cout << "You selected: Contact Staff." << endl;
        } 
        else if (choice == 6) {
            cout << "Exiting Restaurant Management System. Thank you!" << endl;
            break;
        } 
        else {
            cout << "Invalid choice! Dobara koshish karein." << endl;
        }
    }

    return 0;
}