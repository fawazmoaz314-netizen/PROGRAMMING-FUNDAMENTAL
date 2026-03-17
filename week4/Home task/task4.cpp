#include<iostream>
using namespace std;
int main(){
    int redr , whiter ,tulips;
    double originalp , discountp;
    cout<<"Enter the number of red roses : ";
    cin>> redr;
    cout<<" Enter the number of white roses : ";
    cin>> whiter;
    cout<<" Enter the number of tulips : ";
    cin>> tulips;
    originalp = (redr * 2.00)+( whiter *4.10 )+ ( tulips*2.50);
    cout<<" Original price = " << originalp ;
    if (originalp > 200 ){
        discountp = originalp - (originalp * 0.20);
        cout<<" Price after discount : " << discountp<< endl;
        cout<<endl;
    } else {
        cout<<" Total price : "<< originalp;
    }
}