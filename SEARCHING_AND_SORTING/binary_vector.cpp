#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int firstocc(vector<int> arr,int target ){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==target){
            // answer store
            ans=mid;
            // left search
            end=mid-1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
            else if(target>arr[mid]){
                // right search
                start=mid+1;
            }
             mid=start+(end-start)/2;
    }
    return ans;
}


int main(){
    vector<int> arr{1,3,4,4,4,4,6,7};
    int target=4;

    int ans=firstocc(arr,target);

    cout<<"ans is "<<ans<<endl;
    return 0;
}
