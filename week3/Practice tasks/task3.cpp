#include<iostream>
using namespace std;
int main(){
int min , fps , frames;
cout<<" Enter minutes :";
cin>> min;
cout<<" Enter fps :";
cin>> fps;
frames = min * 60 * fps;
cout<<" Total frames = " << frames;
return 0;
}