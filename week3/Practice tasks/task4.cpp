#include<iostream>
using namespace std;
int main(){
float impo ,pl , ch ;
cout<<" Enter imposters : ";
cin>> impo;
cout<<" Enter players :";
cin>> pl;
ch = (impo/pl) * 100;
cout<<" Chance = "<<ch<<"%";
return 0;
}