#include<iostream>
using namespace std;

int findnum(int arr[],int size,int target){

 int start=0;
 int end=size-1;


 int mid=(start+end)/2;

while(start<=end){
    
 int number=arr[mid];

 if(number==target){
    return mid;
 }

 else if(target<number){
    end=mid-1;
 }
 else if(target>number){
    start=mid+1;
 }
 mid=(start+end)/2;
}
return -1;

}


int main(){

int arr[]={0,1,2,3,4,5,6,7,8,9,10,20,30,40,50,60,70,80,90,100};
int size=20;
int target;

cout<<"Enter the number for finding element"<<endl;
cin>>target;

int indexnum=findnum(arr,size,target);

if(indexnum==-1){
    cout<<"number not found";
}
else{
    cout<<"number found at "<<indexnum<<" index and number is "<<target<<" :)";
}


    return 0;
}