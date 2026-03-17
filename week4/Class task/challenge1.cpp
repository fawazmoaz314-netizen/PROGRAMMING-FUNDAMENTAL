#include<iostream>
using namespace std;
int main(){
float bill;
float discount;
cout<< " Enter your bill : ";
cin>> bill;
if (bill<=5000){
discount = bill - (0.05*bill);
cout<<" your disounted bill is :" <<(float)discount << endl;
}
else{
    discount = bill -(0.10*bill);
    cout<< "your discounted bill is :" <<(float)discount << endl;
}
return 0;
}