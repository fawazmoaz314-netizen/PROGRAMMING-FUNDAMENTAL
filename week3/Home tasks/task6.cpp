#include<iostream>
using namespace std;
int main(){
float sofip, cob, aisfcbb, cofpp, cofpsf;
cout<<" Enter the size of the fertilizer bag in pounds : ";
cin>> sofip;
cout<<" Enter the cost of the bag : $";
cin>> cob;
cout<<" Enter the area in the square feet that can be covered by bag : ";
cin>> aisfcbb;
cofpp = cob/sofip;
cofpsf = cob/aisfcbb;
cout<<" Cost of fertilizer per pound : $"<<cofpp;
cout<<endl;
cout<<" Cost of fertilizing per square feet : $"<<cofpsf;
return 0;
}