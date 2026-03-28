#include<iostream>
using namespace std;

int main(){
int num;
cout<<"How many numbers you want to enter: ";
cin>>num;
int number[num];
for(int count=0;count<num;count++){
    cout<<"Enter "<<count+1<<" Number: ";
    cin>>number[count];
}       
for(int count=0;count<num;count++){
    cout<<"The "<<count+1<<" element is : "<<number[count]<<endl;
}
    return 0;
}