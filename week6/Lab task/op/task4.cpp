#include<iostream>
    using namespace std;
    int main(){

int count;
cout<<"Enter the number of elements in array :";
cin>>count;
if(count<=0){
    cout<<"Invalid input. Please enter a positive integer."<<endl;
    return 1; 
}


int num[count];
cout<<"Enter "<<count<<" numbers , one per line "<<endl;
for(int i =0;i<count;i++){
    
    cout<<"Enter  number "<<i+1<<" :";
    cin>>num[i];
}
for(int i =count-1;i>=0;i--){
    cout<<num[i]<<" ";
}
        return 0;
    }