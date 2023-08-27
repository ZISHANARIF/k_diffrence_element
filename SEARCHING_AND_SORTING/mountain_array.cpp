#include<iostream>
using namespace std;

int findpeak(int arr[],int size){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }

        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    } 
    return mid;
}

int main(){

int arr[]={0,1,2,3,4,10,9,8,7,6,5};
int size=10;

int ans=findpeak(arr,size);

    if(ans){
    cout<<"peak element in this array is "<<arr[ans]<<" index is "<<ans;
    }

}