#include <iostream>
#include <conio.h>
using namespace std;
main()
{

    int Total_STUDENTS = 10000; // total size
    int index = 7;

    // data structures
    string nameArray[Total_STUDENTS] = {"ali", "ammar", "sara", "ahmed", "zain", "nida", "tariq"};
    int ageArray[Total_STUDENTS] = {19, 20, 21, 22, 20, 23, 19};
    float matricArray[Total_STUDENTS] = {1050, 890, 940, 960, 880, 910, 995};
    float interArray[Total_STUDENTS] = {980, 850, 900, 879, 820, 840, 950};
    float ecatArray[Total_STUDENTS] = {350, 280, 300, 330, 270, 310, 360};
    string pref1Array[Total_STUDENTS] = {"CE", "CS", "IT", "CS", "EE", "CS", "CE"};
    string pref2Array[Total_STUDENTS] = {"CS", "CE", "CE", "IT", "CS", "IT", "EE"};
    string pref3Array[Total_STUDENTS] = {"EE", "CS", "CS", "EE", "CE", "EE", "CS"};
    float aggriArray[Total_STUDENTS];

    // CRUD Create, Read, Update, Delete
    while (true)
    {
        // main header of ums
        system("cls");
        cout << "----------------------------------------------------" << endl;
        cout << "-------University Admission Management System-------" << endl;
        cout << "----------------------------------------------------" << endl;

        cout << " User menu" << endl;
        cout << "1 Admin" << endl;
        cout << "2 Student" << endl;
        cout << "3  Exit" << endl;
        cout << "Choose option : ";
        string userOption;
        cin >> userOption;

        cout << " You Choose : " << userOption << endl;

        if (userOption == "1")
        {
            // write here the admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << " Admin Menu : Login attempt " << i + 1 << endl;
                cout << " Enter username : ";
                string username;
                cin >> username;
                cout << " Enter the password : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "  Login Sucess ";

                    while (true)
                    {
                        system("cls");
                        cout << "1 Show all students " << endl;
                        cout << "2 Search Student " << endl;
                        cout << "3 Update Student Record" << endl;
                        cout << "4 Generate Merit List" << endl;
                        cout << "5 Delete Record  by name " << endl;
                        cout << "6 Logout" << endl;
                        cout << "Choose the option :";
                        string adminoption;
                        cin >> adminoption;
                        if (adminoption == "1")
                        {
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == "2")
                        {
                            // find student by name
                            cout << "Enter the name you want to search : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found aganist name" << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminoption == "3")
                        {
                            // update student record
                            cout << "Enter the name you want to search : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "-----Old Record-----" << endl;
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << "Enter new record for update" << endl;
                                cout << " Enter your name : ";
                                string name;
                                cin >> name;
                                cout << " Enter age : ";
                                int age;
                                cin >> age;
                                cout << " Enter the Matric marks : ";
                                float matric;
                                cin >> matric;
                                cout << "  Enter the FSC marks : ";
                                float fsc;
                                cin >> fsc;
                                cout << " Enter the Ecat marks : ";
                                float ecat;
                                cin >> ecat;
                                cout << " Enter CS, CE, EE as your preference" << endl;
                                cout << " Enter your 1st pref :";
                                string pref1;
                                cin >> pref1;
                                cout << " Enter your 2nd pref : ";
                                string pref2;
                                cin >> pref2;
                                cout << " Enter your 3rd pref : ";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Reord not found " << endl;
                            }
                        }
                        else if (adminoption == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i = i + 1)
                            {
                                float aggri = matricArray[i] / 1100.0 * 100.0 * 0.30 + interArray[i] / 1200.0 * 100.0 * 0.4 + ecatArray[i] / 400.0 * 100 * 0.3;
                                aggriArray[i] = aggri;
                            }

                            // sortimg the data on the basis o faggrigate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {

                                        // swapping of name
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        // swapping of matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        // swapping of inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        // swapping of ecat
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        // swapping of p1
                                        string tempPref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempPref1;

                                        // swapping of p2
                                        string tempPref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempPref2;

                                        // swapping of p3
                                        string tempPref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempPref3;

                                        // swapping of aggregate
                                        float tempagri = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempagri;
                                    }
                                }
                            }

                            // code to display all the data with aggrigate
                            cout << "Name\tAge\taggrigate" << endl;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] != "")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggriArray[i] << endl;
                                }
                            }

                            // Admit students into disciplnes
                        }
                        else if (adminoption == "5")
                        {
                            // Delete Student record
                            cout << "Enter the name you want to Delete Record of : ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {

                                nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout << " Record of " << name << " Deleted" << endl;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminoption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected " << endl;
                        }

                        cout << "Press any key to continue...";
                        getch();
                    }
                    cout << "Press any key to continue...";
                    getch();
                    break;
                }
                else
                {
                    cout << " Username or password is invalid " << endl;
                }
                cout << " Press any key to continue .. ";
                getch();
            }
        }
        else if (userOption == "2")
        {
            // write here the student code
            system("cls");
            cout << "Welcome to UMS Student menu " << endl;

            cout << " Enter your name : ";
            string name;
            cin >> name;
            cout << " Enter age : ";
            int age;
            cin >> age;
            cout << " Enter the Matric marks : ";
            float matric;
            cin >> matric;
            cout << "  Enter the FSC marks : ";
            float fsc;
            cin >> fsc;
            cout << " Enter the Ecat marks : ";
            float ecat;
            cin >> ecat;
            cout << " Enter CS, CE, EE as your preference" << endl;
            cout << " Enter your 1st pref :";
            string pref1;
            cin >> pref1;
            cout << " Enter your 2nd pref : ";
            string pref2;
            cin >> pref2;
            cout << " Enter your 3rd pref : ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;
            cout << " Your data have been saved. " << endl;

            cout << " Press any key to continue...";
            getch();
        }

        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option " << endl;
        }
    } // end of our main while loop

    cout << endl
         << " Thanks for using this software";
}