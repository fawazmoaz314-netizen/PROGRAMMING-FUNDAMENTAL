#include<iostream>
using namespace std;

int main(){
int count;
cout<<"Enter the number of resistors in series :";
cin>>count;
int resistance[count];
cout<<"Enter "<<count<<" resistance values , one per line "<<endl;
for(int i =0;i<count;i++){
    cout<<"Enter  resistance "<<i+1<<" :";
    cin>>resistance[i];
}
int totalResistance=0;
for(int i =0;i<count;i++){
    totalResistance+=resistance[i];
}
cout<<"The total resistance in series is: "<<totalResistance<<" ohms"<<endl;
    return 0;
}