#include<iostream>
using namespace std;
int main(){
int np, soaia;
cout<<" Enter the number of sides of the polygon : ";
cin>> np;
soaia = (np -2) * 180 ;
cout<<" The total sum of internal angles of a : "<<np<< "-sided polygon is : "<<soaia<<" degrees";
return 0;
}