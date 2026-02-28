#include<iostream>
using namespace std;
int main(){
int nom, fps , tnof;
cout<<" Number of Minutes : ";
cin>> nom;
cout<<" Frames per Second : ";
cin>> fps;
tnof = nom * fps * 60;
cout<<" Total Number of Frames : "<< tnof;
return 0;
}