#include<iostream>


using namespace std;

int main(){
char letters[50];
cout<<"Enter the letters in string :";
cin>>letters;
for (int i =0;letters[i]!='\0';i++){
    cout<<letters[i]<<" found at position "<<i<<endl;
}
    return 0;

}