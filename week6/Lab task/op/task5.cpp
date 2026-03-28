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
    for(int j =0;j<i;j++){
        if(num[i]==num[j]){
            cout<<"Duplicate number found: "<<num[i]<<endl;
            break;
           
        }
    }
}
cout<<"Unique numbers in the array are: ";
for(int i =0;i<count;i++){
        bool Duplicate=false;
    for(int j =0;j<i;j++){
        if(num[i]==num[j]){
            Duplicate=true;
            break;
           
        }
    }
    if(!Duplicate){
        cout<<num[i]<<" ";
    }
}
        return 0;
    }