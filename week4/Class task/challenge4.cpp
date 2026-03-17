#include<iostream>
using namespace std;
int main(){
    char ch;// here ch is used for character 
cout<<" Enter any character in lower case : ";
cin>> ch;
if( ch >= '0' && ch <= '9' ){
    cout<<" It is a number ";
}else if ( ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
    cout<<" It is a vowel ";
}else if ( ch >= 'a' && ch <= 'z'){
    cout<<" It is a consonant";
}else {
    cout<<" It's only valid for lower case single letter or a number ";
}
}