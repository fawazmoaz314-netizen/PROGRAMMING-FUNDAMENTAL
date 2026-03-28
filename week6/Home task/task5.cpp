#include<iostream>
#include<string>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number of Customer :";
    cin>>num;
    string name[num];
    cout<<"------------------ Enter Name of "<<num<<" Cuatomer ----------------\n";
    for(int i = 0 ;i<num;i++){
        cout<<"Customer "<<i+ 1 <<" :";
        cin>>name[i];
    }
    cout<<"Enter a letter to check the first letter of name : ";
    char chk;
    cin>>chk;
    int count=0;
    for(int i =0;i<num;i++){

        if(name[i][0]==chk){
count++;
        }
    }
    cout<<"Total Number Starting with "<<chk<<" :"<<count<<endl;
    
    return 0;

}