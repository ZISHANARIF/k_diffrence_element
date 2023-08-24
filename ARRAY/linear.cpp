#include<iostream>
#include<limits.h>
using namespace std;

// bool find(int arr[],int size,int key){

//     // linear search
//     for(int i=0;i<size;i++){
//         if(arr[i]==key)
//         return true;
//     }
//     return false;

// }
// int main(){

// int arr[5]={1,2,3,4,5};
// int size=5;
// cout<<"Enter the key to find"<<endl;
// int key;
// cin>>key;

// if(find(arr,size,key)){
//     cout<<"found"<<endl;
// }
// else{
//     cout<<"not found"<<endl;
// }
// }


// ****************ALTARNATIVE*************

// int main(){
//     int arr[]={1,3,5,7,9,6,8,11};
//     int size=8;
//     int key;
//     cin>>key;
   

//     bool flag=0;
//     // linear search
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             // found
//             flag=1;
         
//         } 
//     }
//     if(flag==1)
// {
//        cout<<"found"<<endl;
// }    
// else
//     cout<<"not found"<<endl;


// *************count 0 and 1

// int main(){
    
//     int arr[]={0,1,0,1,0,1,0,1,0,1,1,0,1,1,1,1,0,0,0,0,0,0,0};
//     int size=23;
    
//     int numzero=0;
//     int numone=0;

//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             numzero++;
//         }
//         if(arr[i]==1){
//             numone++;
//         }
//     }
//     cout<<"Number of zero are "<<numzero<<endl;
//     cout<<"Number of one are "<<numone<<endl;

// *********MAXIMUM NUMBER IN ARRAY************
// int main(){

// int arr[]={2,44,56,7,78,9,8,77,67,59,55};
// int size =11;
// int maxi=INT_MIN;

// for(int i=0;i<size;i++){
//     if(arr[i]>maxi){
//         maxi=arr[i];
//         }    
// }
// cout<<"MAXIMUM NUMBER IN ARRAY IS "<<maxi<<endl;

// *********MINIMUM NUMBER****************

// int mini=INT_MAX;

// for(int i=0;i<size;i++){
//     if(arr[i]<mini){
//         mini=arr[i];
//     }
// }
// cout<<"MINIMUM NUMBER IN ARRAY IS "<<mini<<endl;

// ************EXTREME PRINT***************

// int main(){
//     int arr[]={10,20,30,40,50,60,70};
//     int size=7;
    
   

//     int start=0;
//     int end=size-1;

//     while(start<=end){

//         if(start==end){
//             cout<<arr[start];
//         }
//         else{
//         cout<<arr[start]<<endl;
//         cout<<arr[end]<<endl;
    
//         }
//         start++;
//         end--;
//     }


// **********SWAP AN ARRAY****************
int main(){

int arr[]={10,20,30,40,50,60,70};
int size=7;

int start=0;
int end=size-1;

while(start<=end){
    // swap number
    swap(arr[start],arr[end]);
    start++;
    end--;
}
// before go for loop array will reverse 
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}

  
