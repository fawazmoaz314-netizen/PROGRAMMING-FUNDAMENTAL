#include<iostream>
using namespace std;
int main(){
    int n , count = 0 ;
    cout<<" Enter the number : ";
    cin >> n;
    for ( int i = n;  i>0 ; i = i / 10){
        count = count + 1;
    }
    cout<< " Total Number of Digits : "<< count;
}