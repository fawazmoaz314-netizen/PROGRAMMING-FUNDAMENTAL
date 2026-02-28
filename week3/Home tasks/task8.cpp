#include<iostream>
using namespace std;
int main(){
float vppk, fppk, teir;
cout<<" Enter vegetable price per kilogram (in coins) : ";
cin>> vppk;
cout<<" Enter fruit price per kilogram (in coins) : ";
cin>> fppk;
int tkv, tkf;
cout<<" Enter total kilograms of vegetables : ";
cin>> tkv;
cout<<" Enter total kilograms of fruits : ";
cin>> tkf;
teir = ((vppk * tkv) + (fppk * tkf))/1.94;
cout<<" Total earning in Rupees (Rps) : "<<teir;
return 0;
}