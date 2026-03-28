#include<iostream>
#include<string>
using namespace std;

int main(){
int num;
cout<<"Enter Number of Flights :";
cin>>num;
int flightnum[num];
string destination[num];
int seats[num];
cout<<"--------------------Enter Details of "<<num<<" Flights :----------------------"<<endl;
for(int i = 0 ;i<num;i++){
    cout<<"Enter Number of Flight"<<i+ 1 <<" :";
    cin>>flightnum[i];
    cout<<"Enter Destination of Flight"<<i+ 1 <<" :";
    cin>>destination[i];
    cout<<"Enter Number of Seats in Flight"<<i+ 1 <<" :";
    cin>>seats[i];
    cout<<"-------------------------------------------------------------\n";
    cout<<"\n";
}
cout<<"------------------ Flight Information ----------------\n";
for(int i = 0 ;i<num;i++){
    cout<<"Flight"<<i+ 1 <<" to "<<destination[i]<<" has "<<seats[i]<<" Seats available "<<endl;
  
}
  cout<<endl<<endl;
cout<<"------------------ Flight with less than 5 Seats available ----------------\n";
for(int i = 0 ;i<num;i++){
    if(seats[i] < 5){
        cout<<"Flight"<<i+ 1 <<" to "<<destination[i]<<" has only "<<seats[i]<<" Seats available "<<endl;
    }
    
}
return 0;
}