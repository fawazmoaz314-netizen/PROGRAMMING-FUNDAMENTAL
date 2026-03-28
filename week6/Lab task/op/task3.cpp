#include<iostream>


using namespace std;

int main(){
char letters[50];
cout<<"Enter the letters in string :";
cin>>letters;



for (int i =0;letters[i]!='\0';i++){
  char next=letters[i]+1;
  cout<<next;
}

    return 0;

}