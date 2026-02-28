#include<iostream>
using namespace std;
int main(){ 
int wins, draws, losses, score;
cout<<" Enter the number of wins :";
cin>> wins;
cout<<" Enter the number of draws :";
cin>> draws;
cout<<" Enter the number of losses :";
cin>> losses;
score = (wins * 3) + (draws * 1) + (losses * 0);
cout<<" Pakistan has obtained "<< score << " in Asia Cup Tournament ";
return 0;
}