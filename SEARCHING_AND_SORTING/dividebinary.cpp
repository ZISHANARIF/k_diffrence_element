#include<iostream>
using namespace std;

int finddiv(int dividend,int divisor){

    int start=0;
    int end=dividend;
    int mid=start+(end-start)/2;
    int ans;

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
    int dividend;
    int divisor;
    cout<<"Enter the number for dividend "<<endl;
    cin>>dividend;

    cout<<"Enter the number for divisor "<<endl;
    cin>>divisor;
    
    int ans=finddiv(dividend,divisor);

    if(ans){
        cout<<"answer is "<<ans;
    }
    








}