// **********SECOND LARGEST ELEMENT***********
#include<iostream>
using namespace std;

int main(){

int arr[]={2,1,36,8,5,4,98,67,56,44,23,21};
int size=12;

// sort array

for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){

        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
}

// print sorted array
cout<<"sorted array is"<<endl;

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl<<"second largest element is "<<arr[size-2];
    return 0;
}