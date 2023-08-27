#include<iostream>
#include<vector>
using namespace std;
int findnum(vector<int > arr,int number){

    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while(start<=end){

        if(number==arr[mid])
        return mid;

        if(mid-1>=start &&arr[mid-1]==number)
        return mid-1;

        if(mid+1<= end &&arr[mid+1]==number)
        return mid+1;

        if(arr[mid]<number){
            start=mid+2;
        }
                   
        else{
            end=mid-2;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}


int main(){

vector<int> arr{10,3,20,40,30,50,90,70,80};
int number;
cout<<"Enter thr number for searching ";
cin>>number;
int ans=findnum(arr,number);

if(ans){
    cout<<"number "<<number<<"  is found at "<<ans<<" index";
}

    
}