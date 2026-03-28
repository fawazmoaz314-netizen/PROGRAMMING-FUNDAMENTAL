#include<iostream>
#include<string>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number of Students :";
    cin>>num;
    string name[num];
    cout<<"------------------ Enter Name of "<<num<<" Students ----------------\n";
    for(int i = 0 ;i<num;i++){
        cout<<"Student"<<i+ 1 <<" :";
        cin>>name[i];
    }
    for(int i = 0 ;i<num-1;i++){
        for(int j = i+1 ;j<num;j++){
            if(name[i][0]>name[j][0]){
                string temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
    cout<<"------------------ Sorted Name of "<<num<<" Students ----------------\n";
    for(int i = 0 ;i<num;i++){
        cout<<"Student"<<i+ 1 <<" :"<<name[i]<<endl;
    }

    return 0;
}