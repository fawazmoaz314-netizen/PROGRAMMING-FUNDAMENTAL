#include<iostream>
using namespace std;

int main() {
    char string1[100];
    cout << "Enter the first string: ";
    cin.getline(string1, 100);

    char string2[100];
    int j = 0; 

    for (int i = 0; string1[i] != '\0'; i++) {
       
        if (string1[i] != 'a' && string1[i] != 'e' && string1[i] != 'i' && string1[i] != 'o' && string1[i] != 'u' &&
            string1[i] != 'A' && string1[i] != 'E' && string1[i] != 'I' && string1[i] != 'O' && string1[i] != 'U') 
        {
            string2[j] = string1[i]; 
            j++; 
        }
    }
    
    string2[j] = '\0';
    for (int i = 0; string2[i] != '\0'; i++) {
        cout << string2[i];
    }
    
    return 0;
}