#include<iostream>
using namespace std;
int main(){
int nsm, wsw, hsw, nwp;
cout<<" Number of square meters you can paint : ";
cin>> nsm;
cout<<" Width of the single wall (in meters) : ";
cin>> wsw;
cout<<" Height of the single wall (in meters) : ";
cin>> hsw;
nwp = nsm/(wsw*hsw);
cout<<" Number of walls you can paint : "<<nwp;
return 0;
}