#include<iostream>
using namespace std;
int main(){
    string country_name;
    float tic_p ; 
    float discountp ; 
    float finalp;
    cout<<" Enter the name of the country : ";
    cin>> country_name;
    cout<<" Enter the price of ticket : $";
    cin>> tic_p;
    if( country_name == "Ireland" ){
     discountp = 0.1 * tic_p;   //10%
     finalp = tic_p - discountp;
    }else{
        discountp = 0.05 * tic_p;  //5%
     finalp = tic_p - discountp;
    }
    cout<<"The discount of the ticket = $"<<discountp<<endl;
    cout<<"The final price of the ticket = $"<<finalp<<endl;
}