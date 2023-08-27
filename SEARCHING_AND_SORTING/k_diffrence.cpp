#include<iostream>
using namespace std;

int finddiff(int arr[],int size){

    int k=2;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            
            if(arr[j]-arr[i]==k){
                
                cout<<"("<<arr[j]<<","<<arr[i]<<")"<<endl;
            }
        }
    }
}

int main(){

int arr[]={3,1,4,1,5};
int size=5;

// sort the array for this code

for(int i=0;i<=size-1;i++){
    for(int j=i+1;j<=size-1;j++){

        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
}

    cout<<"sorted array is "<<endl;

    // print sort array

    for(int i=0;i<=size-1;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl<<"pairs of k diffrence element is"<<endl;

    int ans=finddiff(arr,size);

}