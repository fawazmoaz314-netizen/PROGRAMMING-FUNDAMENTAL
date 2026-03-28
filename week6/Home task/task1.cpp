#include<iostream>
using namespace std;

int main(){
int count;
cout<<"Enter number of Elements :";
cin>>count;
int num[count];
cout<<"Enter "<<count<<" numbers :"<<endl;
int sum =0;
for(int i =0;i<count;i++){
cout<<"Number" <<i+ 1 <<" :";
cin>>num[i];
sum = sum +num[i];
}
cout<<"Sum of All elements :"<<sum<<endl;
    return 0;
}