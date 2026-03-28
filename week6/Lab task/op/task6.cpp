#include<iostream>
    using namespace std;
    int main(){

int count;
cout<<"Enter the number of elements in array :";
cin>>count;
int num[count];
cout<<"Enter "<<count<<" numbers , one per line "<<endl;
for(int i =0;i<count;i++){ 
    cout<<"Enter  number "<<i+1<<" :";
    cin>>num[i];
}
int largest=num[0];
for(int i =1;i<count;i++){
    if(num[i]>largest){
        largest=num[i];
    }
}
cout<<"The largest number in the array is: "<<largest<<endl;
        return 0;
           
        }
    