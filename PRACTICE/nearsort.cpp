#include<iostream>
#include<vector>
using namespace std;

int findans(vector<int> arr,int size,int number){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==number){
        return mid;
        }

        if(arr[mid-1]==number){
            return mid-1;
        }

        if(arr[mid+1]==number){
            return mid+1;
        }
        if(arr[mid]<number){
            start=mid+2;
        }
        else{
            end=mid-2;
        }

        mid=start+(end-start)/2;
    }   
}

int main(){

    vector<int> arr{2,1,3,5,4,6,9,7,8};
    int size=9;
    int number;
    cout<<"Enter the number ";
    cin>>number;
    int ans=findans(arr,size,number);

    if(ans){
        cout<<number<<" number found "<<"at "<<ans<<" index";
    }
    else{
        cout<<"number not found";
    }
}