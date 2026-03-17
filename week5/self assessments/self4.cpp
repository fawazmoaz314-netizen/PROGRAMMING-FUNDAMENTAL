#include<iostream>
using namespace std;
int main(){
    int num ;
    int total = 0 ;
    cout<<" Enter the number : ";
    cin>> num;
    while(num >= 0 ){
        total = total + num;
        cout<<" Enter the number : ";//if you put negative number here program stop runs
        cin>> num;
    }
    cout<<" Total sum = "<< total;


}