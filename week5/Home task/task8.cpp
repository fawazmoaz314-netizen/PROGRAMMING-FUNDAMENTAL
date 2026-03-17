#include <iostream>
using namespace std;

int main() {
    int age, washingMachinePrice, toyPrice;
    int toysCount = 0;
    double moneySaved = 0;
    double currentGiftMoney = 10.0;

    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> washingMachinePrice;
    cout << "Enter the unit price of each toy: ";
    cin >> toyPrice;

    for (int i = 1; i <= age; i++) {
        
        if (i % 2 == 0) {
            moneySaved = moneySaved + currentGiftMoney;
            moneySaved = moneySaved - 1.0; 
            currentGiftMoney = currentGiftMoney + 10.0; 
        } 
        else {
            toysCount++;
        }
    }
    moneySaved = moneySaved + (toysCount * toyPrice);

    if (moneySaved >= washingMachinePrice) {
        cout << "Yes!" << endl;
        cout << moneySaved - washingMachinePrice << endl;
    } 
    else {
        cout << "No!" << endl;
        cout << washingMachinePrice - moneySaved << endl;
    }

    return 0;
}