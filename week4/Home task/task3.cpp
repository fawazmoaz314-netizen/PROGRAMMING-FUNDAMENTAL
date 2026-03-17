#include<iostream>
using namespace std;
int main(){
    int temp1 , temp2;
    cout<<" Temperature of city1 : ";
    cin>> temp1;
    cout<<"Temperature of city2: ";
    cin>> temp2;
    if (temp1 - temp2 >= 10 ){
        cout<<" Difference is too Big"<<endl;
    }
    cout<<" Program Ends";
}