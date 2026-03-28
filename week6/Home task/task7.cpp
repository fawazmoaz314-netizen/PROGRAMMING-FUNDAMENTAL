#include<iostream>
#include<string>
using namespace std;

int main(){
    int num;
    
    cout<<"Enter Number of Products :";
    cin>>num;
    int  price[num], quantuity[num];
string productname[num];
cout<<"--------------------Enter Details of "<<num<<" Products :----------------------"<<endl;
for(int i = 0 ;i<num;i++){
    cout<<"Enter Name of Product"<<i+ 1 <<" :";
    cin>>productname[i];
    cout<<"Enter Price of Product"<<i+ 1 <<" :";
    cin>>price[i];
    cout<<"Enter Quantity of Product"<<i+ 1 <<" :";
    cin>>quantuity[i];
    cout<<"-------------------------------------------------------------\n";
    cout<<"\n";
}
int totalprice[num];
for(int i =0 ; i<num;i++){
totalprice[i] = price[i]*quantuity[i];
}

cout<<"------------------ Product INVENTORY REPORT ----------------\n";
for(int i = 0 ;i<num;i++){
    cout<<"Product"<<i+ 1 <<" : "<<productname[i]<<" - Price: "<<price[i]<<" - Quantity: "<<quantuity[i]<<" - Total: "<<totalprice[i]<<"\n";
}
    return 0;
}