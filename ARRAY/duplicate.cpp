#include<iostream>
using namespace std;
// *********FIND DUPLICATE NUMBER************
int main(){

int arr[]={1,2,3,4,5,6,7};
int brr[]={8,9,2,11,22,6,88};
int size=7;

for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
        if(arr[i]==brr[j]){
            cout<<"Duplicate number is "<<brr[j]<<endl;
        }
    }
}
    return 0;
}