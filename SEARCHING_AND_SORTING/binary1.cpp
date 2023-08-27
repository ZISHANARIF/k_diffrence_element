#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start<=end){
        int element=arr[mid];

        if(element==target){
            return mid;
        }
        else if(target<element){
            // left search
            end=mid-1;
        }
        else{
            // right search
            start=mid+1;
        }

        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int target=1;

    int indexoftarget=binarysearch(arr,size,target);

    // now code will execute on line number 4 

    if(indexoftarget==-1){
        cout<<"target not found "<<endl;
    }
        else{
        cout<<"target found at "<<indexoftarget<<endl;
        }
    return 0;
}