#include<iostream>
using namespace std;

int main(){

cout<<"Enter the number of elements for the first array (must be two) :";
int arr1[2];
for(int i =0;i<2;i++){
    cout<<"Enter  number "<<i+1<<" :";
    cin>>arr1[i];
}
cout<<"Enter the number of elements for the second array :";
int count;
cin>>count;
int arr2[count];
cout<<"Enter "<<count<<" numbers , one per line "<<endl;
for(int i =0;i<count;i++){
    cout<<"Enter  number "<<i+1<<" :";
    cin>>arr2[i];
}
int arr3[2+count];
    arr3[0]=arr1[0];
    
for(int i =0;i<count;i++){
    arr3[i+1]=arr2[i];
}
arr3[count+1]=arr1[1];

cout<<"The merged array is: ";
for(int i =0;i<2+count;i++){
    cout<<arr3[i]<<" ";
}


return 0;
}