#include<iostream>
using namespace std;
int main(){
    int speed;
    cout<<" Enter the speed in km/h : ";
    cin>> speed;
    if(speed > 100){
        cout<<" Halt ..... YOU will be challenged!!!";
    }else{
        cout<<" Perfect! You're going good.";
    }
}