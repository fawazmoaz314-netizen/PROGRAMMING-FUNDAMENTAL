#include<iostream>
using namespace std;
int main(){
     int num1,num2;
     cout<<" Enter the number 1 :";
     cin>> num1;
     cout<< " Enter the number 2 :";
     cin>> num2;
     if( num1>num2){
        cout<<" Number "<< num1 << " is greater than " << num2;
    }else { 
        cout<< " Number "<< num2 << " is greater than " << num1;
        
    }
}