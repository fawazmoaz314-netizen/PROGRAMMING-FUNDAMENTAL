#include<iostream>
using namespace std;
int main (){
    int num1 ,num2;
    char op;
    cout<<" Enter the first number  : ";
    cin>> num1;
    cout<<" Enter the operator : ";
    cin>> op;
    cout<<" Enter the second number : ";
    cin>> num2;
    if (op == '+'){
        cout<<"First number - Second number = "<< num1 << " - "<< num2<< " = "<< num1 - num2;
    }
     else if(op == '-'){
        cout<<" First number + Second number = "<< num1 << " + "<< num2 << " = "<< num1 + num2;
    } 
    else if ( op == '*'){
    if (num2!= 0 ) {
        cout<< " First number divided by Second number = "<<num1<< "/"<< num2 << " = "<< num1 /num2 ;
    }else {
        cout<<" Error occurs when second number becomes zero";
    }
}else if( op == '/'){
    cout<<" First number multiply by second number = "<< num1<< " * "<< num2 << " = "<< num1 * num2 ;
} else {
    cout<<" This program runs only on these operators such as addition , substraction , multiplication and division";
}




} 