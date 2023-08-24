#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    // *************count 0 and 1
//    int arr[]={0,1,1,0,1,1,0,0,0,1,1,1,1,0,1,1,1,1,1,1,0,1};

//     int size=22;
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
//     cout<<"number of zero is "<<numzero<<endl;
//     cout<<"number of one is "<<numone<<endl;

// *********maximum number found*************
// int arr[]={1,23,44,56,7,66,78,45,677,78,4566,78778,34556};
// int size=13;

// int max=INT_MIN;

// for(int i=0;i<size;i++){
//     if(arr[i]>max){
//         max=arr[i];
//     }
// }
// cout<<"bigger number is "<<max;

// ***********EXTREME PRINT*************

// int arr[]={12,34,56,76,89,9,12,23,4,66,779,77,67};
// int size=13;

// int start=0;
// int end=size-1;

// while(start<=end){

//     if(start==end){
//         cout<<arr[start]<<" ";
//     }
//     else{
//         cout<<arr[start]<<" ";
//         cout<<arr[end]<<" ";
//     }
//     start++;
//     end--;
// }

// **********SWAP ARRAY*************
int arr[]={12,34,54,56,11,23,44,66,76,55};
int size=10;

int start=0;
int end=size-1;

while(start<=end){
    swap(arr[start],arr[end]);
     start++;
     end--;
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}