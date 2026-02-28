#include<iostream>
using namespace std;
int main(){
string name;
cout<<" Enter the Name of the Person : ";
cin>> name;
float days , kilograms;
cout<<" Enter the target weight loss in kilograms : ";
cin>> kilograms;
days = 15 * kilograms;
cout<<"Ami will need "<<days<<" days to lose "<<kilograms<<" kg of weight by following the doctor's suggestions ";
return 0;
}