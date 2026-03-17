#include<iostream>
using namespace std;
int main(){
    int num;
    int total = 0;

    for ( int i = 1 ; i <= 5 ; i = i + 1 ){
        cout<< i << " Enter the number  : ";
        cin>> num;
        total = total + num;
    }
    cout<<" Total Sum = " << total;
}