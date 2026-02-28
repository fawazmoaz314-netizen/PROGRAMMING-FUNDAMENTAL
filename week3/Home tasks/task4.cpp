#include<iostream>
using namespace std;
int main(){
float impo, play ,chan;
cout<<" Enter Imposter Count : ";
cin>> impo;
cout<<" Enter Player count : ";
cin>> play;
chan = 100 * (impo/play);
cout<<" Chance of being imposter : "<< chan <<"%";
return 0;
}