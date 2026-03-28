#include<iostream>
using namespace std;

int main(){
int count;
int countt=0;
cout<<"Enter number of Elements :";
cin>>count;
int num[count];
cout<<"Enter "<<count<<" numbers :"<<endl;
for(int i =0 ; i<count ;i++)
{
    cout<<"Number" <<i+ 1 <<" :";
cin>>num[i];
}
for(int i =0 ;i <count;i++){

    if(num[i]%2==0){
        countt++;
    }

}
cout<<"Total Evern numbers are :"<<countt<<endl;
return 0;

}