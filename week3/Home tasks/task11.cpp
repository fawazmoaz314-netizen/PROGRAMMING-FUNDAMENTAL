#include<iostream>
using namespace std;
int main(){
int age, ntm, anylsh;
cout<<" Enter the person's age : ";
cin>> age;
cout<<" Enter the number of times they've moved : ";
cin>> ntm;
anylsh = age/(ntm+1);
cout<<" Average number of years lived in the same house : "<<anylsh;
return 0;
}