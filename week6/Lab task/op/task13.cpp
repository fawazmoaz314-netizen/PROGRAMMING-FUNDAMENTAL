#include <iostream>
#include <string>
using namespace std;

int main() {
    int count;
    cout << "Enter the number of chords: ";
    cin >> count;

    string chords[100];
    cout << "Enter " << count << " chords, one per line:" << endl;
    for (int i = 0; i < count; i++) {
        cin >> chords[i];
    }

    for (int i = 0; i < count; i++) {
        if (chords[i].back() != '7') {
            chords[i] += "7";
        }
    }

    cout << "Jazzified chords: [";
    for (int i = 0; i < count; i++) {
        cout << chords[i];
        if (i < count - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}