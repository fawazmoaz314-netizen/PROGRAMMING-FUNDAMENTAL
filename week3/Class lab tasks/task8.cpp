#include<iostream>
using namespace std;
int main(){
float volts, current, power;
cout<<" Enter Voltage (in volts) :";
cin>> volts;
cout<<" Enter Current (in Amperes) :";
cin>> current ;
power = volts * current ;
cout<<" The power is " << power <<" watts ";
return 0;
}