#include<iostream>
using namespace std;

int findpeak(int arr[],int size){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){

        // first line in array

        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        // 2nd line
         end=mid;
         mid=start+(end-start)/2;

    } 

    return mid;

}

int main(){

int arr[]={0,1,2,3,4,5,6,13,12,11,10,9,8,7};
int size=14;

int ans=findpeak(arr,size);

    if(ans){
    cout<<"peak element in this array is "<<arr[ans]<<" index is "<<ans;
    }

}