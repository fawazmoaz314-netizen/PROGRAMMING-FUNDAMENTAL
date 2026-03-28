#include<iostream>
#include<string>
using namespace std;

int main() {
    string b[100];
    int count = 0;
    int c;

    do {
        cout << "\n1. ADD\n2. VIEW\n3. BORROW\n4. EXIT\nChoice: ";
        cin >> c;

        if (c == 1) {
            int n;
            cout << "How many: ";
            cin >> n;

            cin.ignore(); 

            for (int i = 0; i < n; i++) {
                if (count < 100) {
                    cout << "Book name: ";
                    getline(cin, b[count]);
                    count++;
                } else {
                    cout << "Library is full.\n";
                    break;
                }
            }
        } 
        else if (c == 2) {
            if (count == 0) {
                cout << "Library is empty.\n";
            } else {
                for (int i = 0; i < count; i++) {
                    cout << i + 1 << ". " << b[i] << endl;
                }
            }
        } 
        else if (c == 3) {
            int num;
            cout << "Enter book number to borrow: ";
            cin >> num;

            if (num > 0 && num <= count) {
                cout << "You borrowed: " << b[num - 1] << endl;

                
                for (int i = num - 1; i < count - 1; i++) {
                    b[i] = b[i + 1];
                }
                count--;
            } else {
                cout << "BOOK IS NOT PRESENT\n";
            }
        }

    } while (c != 4);

    return 0;
}