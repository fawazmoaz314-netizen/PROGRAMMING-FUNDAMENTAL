#include<iostream>


using namespace std;

int main(){
char letters[50];
cout<<"Enter the letters in string :";
cin>>letters;
char search;
cout<<"Enter the letter to search :";
cin>>search;
bool found=false;
for (int i =0;letters[i]!='\0';i++){
    if (letters[i]==search){
        found=true;
        break;
    }
}
if (found){
    cout<<"Letter found in the string."<<endl;
}
else{
    cout<<"Letter not found in the string."<<endl;
}
    return 0;

}