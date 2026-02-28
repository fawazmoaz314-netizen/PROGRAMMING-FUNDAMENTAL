#include<iostream>
using namespace std;
#include<string>
int main(){
string name;
int matric, intermediate , ecat;
cout<< " Enter your name :";
cin>> name;
cout<< "Enter Matric Marks(out of 1100) :";
cin>> matric;
cout<< "Enter Intermediate Marks(out of 550) :";
cin>> intermediate;
cout<<"Enter Ecat Marks(out of 400) :";
cin>> ecat;
float aggregate =((ecat /400.0)*50)+((intermediate/550.0)*40)+((matric/1100.0)*10);
cout<<"Aggregate score for UET is :"<<aggregate<<"%";

return 0;
}