#include<iostream>
using namespace std;
int main(){
  float n;
  int c1=0,c2=0,c3=0,c4=0,c5=0;
  float per1,per2,per3,per4,per5;
  cout<<"Enter Number count: ";
  cin>>n;
  for(int i=0;i<n;i++){
    int currentnum;cout<<"Enter number: ";
    cin>>currentnum;

    if(currentnum<200){
        c1++;
    }
    else if(currentnum>=200&&currentnum<=399){
        c2++;
    }
    else if(currentnum>=400&&currentnum<=599){
        c3++;
    }
    else if(currentnum>=600&&currentnum<=799){
        c4++;
    }
    else if(currentnum>=800){
        c5++;
    }
  }
    per1=(c1/n)*100;
    per2=(c2/n)*100;
    per3=(c3/n)*100;
    per4=(c4/n)*100;
    per5=(c5/n)*100;

    cout<<per1<<"%"<<endl;
    cout<<per2<<"%"<<endl;
    cout<<per3<<"%"<<endl;
    cout<<per4<<"%"<<endl;
    cout<<per5<<"%"<<endl;
}