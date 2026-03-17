#include<iostream>
using namespace std;
int main(){
     string word1 , word2;
     cout<<" Enter the word1 : ";
     cin>> word1;
     cout<<" Enter the word2 : ";
     cin>> word2;
     if(word1 == word2){
        cout<<" Yes, The words are same";
     }else{
        cout<<" No , The words are different";
     }
}