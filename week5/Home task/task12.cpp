#include <iostream>
using namespace std;

int main() {
    int choice;
    string bookName = "None"; 

    while (true) {
        cout << "\n--- Library System ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Book" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Exit" << endl;
        
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter book name: ";
            cin >> bookName; 
            cout << "You added a book: " << bookName << endl;
        } 
        else if (choice == 2) {
            cout << "Current book in library: " << bookName << endl;
        } 
        else if (choice == 3) {
            cout << "You borrowed: " << bookName << endl;
        } 
        else if (choice == 4) {
            cout << "Book issued successfully!" << endl;
        } 
        else if (choice == 5) {
            cout << "Exiting Library System. Goodbye!" << endl;
            break; 
        } 
        else {
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}