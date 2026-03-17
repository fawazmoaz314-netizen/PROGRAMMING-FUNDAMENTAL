#include <iostream>
using namespace std;

int main() {
    string username, password;
    string studName = "";
    int studAge = 0;
    string courseName = "";
    int choice;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        if (username == "admin" && password == "1234") {
            cout << "Login Successful!" << endl;

            for (int j = 1; j > 0; j++) {
                cout << "\n**** University Management System ****" << endl;
                cout << "1. Add Student Detail" << endl;
                cout << "2. View Student Detail" << endl;
                cout << "3. Add Course Detail" << endl;
                cout << "4. Exit Program" << endl;
                
                cout << "\nEnter Choice: ";
                cin >> choice;

                if (choice == 1) {
                    cout << "Enter Student Name: ";
                    cin >> studName;
                    cout << "Enter Student Age: ";
                    cin >> studAge;
                    cout << "Student Added Successfully!" << endl;
                }
                else if (choice == 2) {
                    if (studName != "") {
                        cout << "Student Name: " << studName << endl;
                        cout << "Student Age: " << studAge << endl;
                    } else {
                        cout << "No Student Record Found!" << endl;
                    }
                }
                else if (choice == 3) {
                    cout << "Enter Course Name: ";
                    cin >> courseName;
                    cout << "Course Added Successfully!" << endl;
                }
                else if (choice == 4) {
                    cout << "Program Exit" << endl;
                    return 0;
                }
                else {
                    cout << "Invalid Choice!" << endl;
                }
            }
        }
        else {
            cout << "Wrong Login!" << endl;
        }
        
        if (i == 3 && (username != "admin" || password != "1234")) {
            cout << "Too many attempts. Program End." << endl;
        }
    }

    return 0;
}