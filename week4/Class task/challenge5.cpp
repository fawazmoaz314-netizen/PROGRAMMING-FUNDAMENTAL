#include<iostream>
using namespace std;
int main(){
    string name1, name2, name3;
    int age1 , age2 , age3;
  cout<<" Enter the name of the first brother : ";
  cin>> name1;
  cout<<" Enter the age of the first brother : ";
  cin>> age1;
  cout<<" Enter the name of the second brother : ";
  cin>> name2;
  cout<<" Enter the age of the second brother : ";
  cin>> age2;
  cout<<" Enter the name of the third brother : ";
  cin>> name3;
  cout<<" Enter the age of the third brother : ";
  cin>> age3;
  if (age1 < age2 && age1 < age3){
    cout<< name1 <<" is the youngest";
  }else if (age2 < age1 && age2 < age3){
    cout<< name2 << " is the youngest";
  }else {
    cout<< name3 << " is the youngest";
  }
}