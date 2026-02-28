#include<iostream>
using namespace std;
int main(){
float MB , bits;
cout<<" Enter the size in megabytes (MB) :";
cin>> MB ;
bits = MB * 1024.0 *  1024.0 * 8.0;
cout<< MB<<" is equivalent to "<<bits<<"bits .";
return 0;
} 