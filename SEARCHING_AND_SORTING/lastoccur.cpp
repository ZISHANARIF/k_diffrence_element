#include<iostream>
#include<vector>
using namespace std;

int lastoccurance(vector<int>arr,int target){

    int start=0;
    int end= arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==target){
            // ans store
            ans=mid;
            // right search
            start=mid+1;
        }
        else if(target<arr[mid]){
            // left search
            end=mid-1;
        }
        // else if(target>arr[mid]){
        //     // right search
        //     start=mid+1;
        // }
            mid=start+(end-start)/2;
    }
    return ans;
}

int main(){

vector<int> arr{1,3,7,7,7,7,7,7,7,7,7,7,9};
int target;
cout<<"ente the number for finding occurance "<<endl;
cin>>target;

int ans=lastoccurance(arr,target);

if(ans==-1){
    cout<<"element not found";
}
else{
cout<<"Last occurance is at "<<ans<<endl;
}

    return 0;
}