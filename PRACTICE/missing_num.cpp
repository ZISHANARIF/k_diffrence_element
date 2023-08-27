#include<iostream>
using namespace std;

int findnum(int number,int arr[],int size){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){

        if(number==arr[mid]){
            return true;
        }
        if(arr[mid]<number){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return false;
}

int main(){

int arr[]={1,2,3,4,5,6,7,9,10,12,13,14,15,17,19};
int number;
int size=15;
cout<<"Enter the number ";
cin>>number;
int ans=findnum(number,arr,size);

if(ans){
    cout<<number<< "   number is present in this array";
}
else{
    cout<<number<<" number is missing";
}

    return 0;
}