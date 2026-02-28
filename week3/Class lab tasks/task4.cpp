#include<iostream>
using namespace std;
int main(){
float charge , time, current;
cout<<" Enter the Charge(Q) in Coulombs :";
cin>> charge ;
cout<< " Enter the time(t) in seconds :";
cin>> time;
current = charge/time;
cout<<"The current (I) is = "<<current<<"Amperes";
return 0;
}