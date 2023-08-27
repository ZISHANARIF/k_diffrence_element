#include<iostream>
using namespace std;

int main(){

int arr[]={1,2,3,4,5,6,7,8,9};
int size=9;

int k=7;

for(int i=0;i<size;i++){

    if(abs(k-arr[i])==2){
        cout<<arr[i]<<" ";
    }

      if(abs(k-arr[i])==1){
        cout<<arr[i]<<" ";
    }
}

}