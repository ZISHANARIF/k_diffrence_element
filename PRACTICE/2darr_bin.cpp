#include<iostream>
using namespace std;

bool binary(int arr[4][5], int number,int row,int col){

    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        int rowindex=mid/col;
        int colindex=mid%col;

        if(arr[rowindex][colindex]==number){
            cout<<"number "<<number<<"found at "<<rowindex<<" "<<colindex;
            return true;
        }
        if(arr[rowindex][colindex]<number){
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

int arr[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
int number;
cout<<"Enter the number what you find in array ";
cin>>number;
int row=4;
int col=5;

bool ans=binary(arr,number,row,col);

if(ans){
    cout<<" position";
}
else{
    cout<<"element not found";
}
    

}