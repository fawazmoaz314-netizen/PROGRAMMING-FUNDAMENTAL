#include<iostream>
using namespace std;
int main(){
int iv, acc, tim, fv;
cout<<" Enter Intial Velocity (m/s) : ";
cin>> iv;
cout<<" Enter Acceleration (m/s^2) : ";
cin>> acc;
cout<<" Enter Time (s) : ";
cin>> tim;
fv = ((acc * tim) + iv);
cout<<" Final Velocity (m/s) : "<<fv;
return 0;
}