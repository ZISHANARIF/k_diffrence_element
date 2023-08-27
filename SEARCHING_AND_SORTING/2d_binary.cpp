#include<iostream>
 using namespace std;

 bool binarysearch(int arr[4][4],int row,int col,int target){

    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        int rowindex=mid/col;
        int colindex=mid%col;

        if(arr[rowindex][colindex]==target){
            cout<<"found at "<<rowindex<<" "<<colindex;

             return true;
        }
        if(arr[rowindex][colindex]<target){
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

int arr[4][4]={{1,2,3,4},{5,6,7,8},{11,22,33,44},{55,66,77,88}};
int row=4;
int col=4;

int target=44;

bool ans=binarysearch(arr,row,col,target);

if(ans){ 

    cout<<" position";
}
else{
    cout<<"element not found";
}
   
 }