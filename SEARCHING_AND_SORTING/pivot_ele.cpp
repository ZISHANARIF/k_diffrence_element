#include<iostream>
#include<vector>
using namespace std ;

int findans(vector<int>arr){
     
     int start=0;
     int end=arr.size()-1;
     int mid=start+(end-start)/2;
     int value;

     while(start<=end){

        if(mid<=end && arr[mid]> arr[mid+1]){
                      
            return mid;
        }
        if(mid-1>= start&&arr[mid-1]>arr[mid])
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

vector<int> arr{8,9,10,2,3,4,5,6,7};

int ans =findans(arr);
if(ans==-1){
    cout<<"kuch gadbad hai"<<endl;
}
else{
    cout<<"ans is at index "<<ans<<endl;
    cout<<"value of ans is "<<arr[ans]<<endl;
}

}



