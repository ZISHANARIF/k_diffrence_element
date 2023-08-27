#include<iostream>
using namespace std;

int findpivot(int arr[],int size){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){

        if(start==end)
        return start;
        
       if(mid<=end&& arr[mid]> arr[mid+1])
       return mid;

       if(mid-1 >= start && arr[mid-1]>arr[mid])
       return mid-1;

       if(arr[start]>arr[mid])
       
       end=mid-1;

       else{
        start=mid+1;
       }
       mid=start+(end-start)/2;
   
    }
}

int main(){

int arr[]={8,9,10,11,12,13,14,15,2,3,4,5,6,7};
int size=14;

int ans=findpivot(arr,size);

if(ans){
    cout<<"pivot element is "<<arr[ans]<<" in this array :)";
}

}