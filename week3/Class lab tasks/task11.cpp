#include<iostream>
using namespace std;
int main(){
int CP , MBR ,P3D;
cout<<" Enter the current world population :";
cin>> CP ;
cout<<" Enter the monthly birth rate (number of births per month): ";
cin>> MBR ;
P3D = ((MBR * 12 * 30) + CP);
cout<<" Population in three Decades will be :"<< P3D;
return 0;
} 