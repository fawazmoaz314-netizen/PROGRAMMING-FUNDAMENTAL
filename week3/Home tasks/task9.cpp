#include<iostream>
using namespace std;
int main(){
int fdn, n1, n2, n3, n4, sm;
cout<<" Enter a 4-digit number : ";
cin>> fdn;
n1 = fdn%10;
n2 = (fdn/10)%10;
n3 = (fdn/100)%10;
n4 = (fdn/1000)%10;
sm = n1+n2+n3+n4;
cout<<" Sum of individual digits = "<<sm;
return 0;
}