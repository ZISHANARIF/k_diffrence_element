#include<iostream>
using namespace std;

int main(){

    // int arr[]={0,1,1,0,0,1};
    // int size=6;

    // int start=0;
    // int end=size-1;
    // int i=0;

    // while(start<end){
    //     if(arr[i]==0){
    //         swap(arr[start],arr[i]);
    //         start++;
    //         i++;

    //     }
    //     if(arr[i]==1){
    //         swap(arr[i],arr[end]);
    //         end--;
    //     }
   
    // }
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }


// *************** SORT  color white=0,red=1,green=2*****************

// int arr[]={0,1,2,0,1,1,2,0,2,0};
// int size=10;
// int start=0;
// int lastend=size-1;
// int end=size-1;
// int i=0;

// while(start<end){

//     // sort zero

//     if(arr[i]==0){
//         swap(arr[i],arr[start]);
//         start++;
//         i++;
//     }
//     // sort one

//     if(arr[i]==1){
//         swap(arr[i],arr[end]);
//         end--;
//     }

//     // sort 2

//     if(arr[i]==2){
//         swap(arr[i],arr[lastend]);
//         lastend--;
//     }
    
// }

// // print array after sort

// for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
// }


// ********* ALL NEGATIVE NUMBER SORT************

int arr[]={-1,2,-3,5,8,7,-9,-4,6,0};

int size=10;
int start=0;
int end=size-1;
int i=0;

cout<<"sort negative number is"<<endl;
while(start<end){
 
    if(arr[i]>=0){
        swap(arr[i],arr[start]);
        start++;
        i++;
    }

    if(arr[i]<0){
        swap(arr[i],arr[end]);
        end--;
    }
}

// print value after sort

for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}

// *************FIND MISSING ELEMENT**************

// int arr[]={1,4,5,6,8,7,9,0,11,22,56};

// int key;
// int size=11;
// int i=0;

// cout<<"Enter the number for checking element "<<endl;

// cin>>key;
// for(int i=0;i<size;i++){
// if(arr[i]==key){
//      cout<<key<<" is present ";
// }

// }
// for(int i=0; i<size; i++){
//     if(arr[i]!=key){
//      cout<<key<<" Key is absent";   
//     }
// }
    return 0;
}