#include<iostream>
using namespace std;

int main(){
int number[5];
for(int count=0;count<5;count++){
    cout<<"Enter "<<count+1<<" Number: ";
    cin>>number[count];
}

cout<<"The first element in array is : "<<number[0]<<endl;

cout<<"The last element in array is : "<<number[4]<<endl;
    return 0;
}