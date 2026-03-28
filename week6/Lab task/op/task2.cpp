#include<iostream>


using namespace std;

int main(){
char letters[50];
cout<<"Enter the letters in string :";
cin>>letters;
int count=0;
while (letters[count]!='\0'){
    count++;
}

for (int i =count-1;i>=0;i--){
    cout<<letters[i] ;
}
    return 0;

}