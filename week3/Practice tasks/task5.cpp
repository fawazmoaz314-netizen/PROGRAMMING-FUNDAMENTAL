#include<iostream>
using namespace std;
int main(){
int age, moves , avy;
cout<<" Enter age : ";
cin>> age;
cout<<" Enter moves : ";
cin>> moves;
avy = age/(moves + 1);
cout<<"Average years = "<<avy ;
return 0;
}