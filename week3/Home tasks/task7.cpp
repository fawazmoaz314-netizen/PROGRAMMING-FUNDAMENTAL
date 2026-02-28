#include<iostream>
using namespace std;
int main(){
string name;
cout<<" The name of the movie : ";
cin>> name;
float pat, poct, noats, nocts, ptmdc, tagfts, dtc , raad;
cout<<" Enter the price of an adult ticket : $";
cin>> pat;
cout<<" Enter the price of a child ticket : $";
cin>> poct;
cout<<" Enter the number of adult tickets sold : ";
cin>> noats;
cout<<" Enter the number of children's ticket sold : ";
cin>> nocts;
cout<<" Enter the percentage of amount to be donated to charity : ";
cin>> ptmdc;
tagfts = ((pat * noats) + (poct * nocts));
dtc = ((ptmdc/100) * tagfts);
raad = (tagfts - dtc);
cout<<endl;
cout<<"------------------------------------------"<<endl;
cout<<endl;
cout<<" Movie : "<<name;
cout<<endl;
cout<<" Total Amount Generated from ticket sales : $"<<tagfts;
cout<<endl;
cout<<" Donation to charity("<<ptmdc<<") : $"<<dtc;
cout<<endl;
cout<<" Remaining amount after donation : $"<<raad;
return 0;
}