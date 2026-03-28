#include<iostream>
#include<string>
using namespace std;

int main(){
    string name[5];
    cout<<"------------------ Enter Name of Five Suednts ----------------\n";
    for(int i = 0 ;i<5;i++){
        cout<<"Student "<<i+ 1 <<" :";
        cin>>name[i];
    }
    cout<<"--------------- Studewaqnts Name are ------------------------\n";
    for(int i = 0 ;i<5;i++){
        cout<<name[i]<<endl;
    }
    
    return 0;

}