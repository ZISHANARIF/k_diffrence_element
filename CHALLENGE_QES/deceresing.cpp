// DECERESING ARRAY  CODE********
#include<iostream>
using namespace std;
int main(){

int arr[]={5,1,3,2,7,6,9,8,11,21,22,19,17,15,34,32,99,78,67,99};
int size=20;
int start=0;
int end=size-1;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){

            if(arr[i]>arr[j]){

            swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"print sorted array "<<endl;
    for(int i=0;i<size;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl<<"reverse array print "<<endl;

   while(start<=end){

    cout<<arr[end]<<" ";
    end--;
   }
    return 0;
}