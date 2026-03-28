#include<iostream>
using namespace std;

int main(){
int sum=0;
float average = 0;
    int number[5]={1,2,3,4,5};
    for(int i =0;i<5;i++){
        sum = sum+number[i];
    }
    average = sum/5.0;
    cout<<"Sum :"<<sum<<endl;
    cout<<"Average :"<<average<<endl;
   return 0;
}