#include<iostream>
using namespace std;

int findans(int dividend,int divisor){

    int start=0;
    int end=dividend;
    int mid=start+(end-start)/2;
    int ans=0;

    while(start<=end){

        if(mid*divisor==dividend){
            return mid;
        }

        if(mid*divisor>dividend){
            end=mid-1;
        }

        else{
            ans=mid;
            start=mid+1;
        }

        mid=start+(end-start)/2;

    }
}

int main(){

int divisor;
int dividend;

cout<<"Enter the number for dividend ";
cin>>dividend;

cout<<"Enter the number for divisor ";
cin>>divisor;

int ans=findans(dividend,divisor);

if(ans){
    cout<<"number "<<dividend<<" divisor is "<<ans;
}

}