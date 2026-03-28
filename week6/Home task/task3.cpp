#include<iostream>
using namespace std;

int main(){
int count;
cout<<"Enter number of Elements :";
cin>>count;
int num[count];
cout<<"Enter "<<count<<" numbers :"<<endl;
for(int i =0 ; i<count ;i++)
{
    cout<<"Number" <<i+ 1 <<" :";
cin>>num[i];
}
int largest = num[0];
int  smallest=num[0];
for(int i =1;i<count;i++){
    if(num[i]>largest){
        largest =num[i];
    }
    if(num[i]<smallest){
        smallest = num[i];
    }
}
cout<<"Largest NUMBER  IS :"<<largest<<endl;
cout<<"Smallest number is :"<<smallest<<endl;

return 0;
}