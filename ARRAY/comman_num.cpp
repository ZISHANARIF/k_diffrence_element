#include<iostream>
using namespace std;

int main(){

int arr[]={1,2,3,4,0,5,6,7,8,11};
int brr[]={4,5,6,7,8,9,0,90,67,11};
int crr[]={7,8,9,0,11,22,33,44,55,88};
int size=10;

for(int i=0; i<size; i++){
    
    for(int j=0; j<size; j++){
        if(arr[i]==brr[j]){
            for(int k=0; k<size; k++){
                if(brr[j]==crr[k]){
                    cout<<"comman element is "<<crr[k]<<endl;
                }
            }
        }
    }
}

    return 0;
}