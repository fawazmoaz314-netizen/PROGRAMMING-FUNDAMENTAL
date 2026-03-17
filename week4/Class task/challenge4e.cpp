#include<iostream>
using namespace std;
int main(){
    string my_password , user_enter;
    my_password = "5443mh@#" ;
    cout<<" Enter the password :";
    cin>> user_enter;
    if(user_enter == my_password){
        cout<<" Woo, I have cracked password";
    }else{
        cout<<" It's not simple! Try again";
    }
}