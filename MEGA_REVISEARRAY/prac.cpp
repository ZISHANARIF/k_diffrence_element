#include<iostream>
#include<limits.h>
using namespace std;

// *******MAXIMUM NUMBER IN ARRAY********

/*int main(){

    int arr[]={2,1,3,5,4,7,6,8,0,77,55,66,34};
    int size= 13;

    int max=INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum value in array is "<<max;

    return 0;
}*/

// *********EXTREM PRINT**********

/*int main(){

    int arr[]={10,20,30,40,50,60,70};
    int end=6;

    for(int i=0;i<=end;i++){

        if(i<end){
        cout<<arr[i]<<" "<<arr[end]<<" ";
        }

        if(arr[i]==arr[end]){
           cout<<arr[i]<<" ";
        }
          end--;
    }
    return 0;
}*/

// ********FIND DUPLICATE NUMBER**********

/*int main(){

int arr[]={2,3,4,6,5,9,11,9};
int size=8;

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size;j++){

            if(arr[i]==arr[j]){
            cout<<"Duplicate number in this array is "<<arr[i]<<" at index "<<i<<" position";            
            }       
        }  
    }
}
*/

// *********MISSING NUMBER FIND*********

/*int main(){

int arr[]={1,23,4,56,7,8,9,12,24,44,55,66};
    int size=12;
    int number;
    int start=0;

    cout<<"Enterthe number for finding element ";
    cin>>number;

    for(int i=0;i<=size-1;i++){
        if(arr[i]==number){ 

            cout<<number<<" is present at index "<<i;
        }
        
    }  
    return 0;
}
*/
// ***********COMMAN NUMBER********
/*
int main(){

int arr[]={2,3,4,5,6,7,8,9,0};
int brr[]={11,21,23,24,34,54,67,78,9};
int size=9;

    for(int i=0; i<=size-1; i++){
        for(int j=0; j<=size-1; j++){

            if(arr[i]==brr[j]){

                cout<<"comman element in this intire array is "<<arr[i];
            }

        }
    }
    return 0;
}
*/

// ********SORT ZERO AND ONE************

int main(){

int arr[]={1,0,0,1,0,0,1};
int size=7;
int start=0;
int end=size-1;
int i=0;


    while(start<end){

        if(arr[start]==0){
            swap(arr[i],arr[start]);
            start++;
            i++;
        
        }
        else{
            swap(arr[start],arr[end]);
            end--;
        }
      
    }
       for(int i=0;i<=end;i++){
    cout<<arr[i]<<" ";
    }
   

    return 0;

}
