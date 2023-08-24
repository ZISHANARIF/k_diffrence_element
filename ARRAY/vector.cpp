#include<iostream>
#include<vector>
using namespace std;

int main(){



// *************UNION OF VECTOR********************
//    int arr[]={1,2,3,4,5,6};
//    int sizea=6;
//    int brr[]={7,8,9,0};
//    int sizeb=4;

//    vector<int>ans;

//    for(int i=0;i<sizea;i++){
//     ans.push_back(arr[i]);
//    }
//    for(int i=0;i<sizeb;i++){
//     ans.push_back(brr[i]);
//    }
//     for(int i=0;i<ans.size();i++){
        
//         cout<<ans[i]<<" ";
//     }

// ************PAIR SUM*************

// vector<int>arr{10,20,30,40,50,60,70};
// int sum=80;
// cout<<"pair sum in finding element is  "<<endl;

// for(int i=0;i<arr.size();i++){
//     int element=arr[i];

//     for(int j=i+1;j<arr.size();j++){
//         if(element+arr[j]==sum){
//             cout<<"("<<element<<","<<arr[j]<<")" <<"sum is"<<sum<<endl;
//         }
//     }

// }


// ***********TRIPLATE SUM*************

    // vector<int>arr{10,20,30,40,50,60,70};
    // int sum=100;

    // for(int i=0;i<arr.size();i++){
    //     int element1=arr[i];

    //     for(int j=i+1;j<arr.size();j++){
    //         int element2=arr[j];

    //         for(int k=j+1;k<arr.size();k++){
    //              int element3= arr[k];

    //              if(element1+element2+element3==sum){
    //                 cout<<"pair is ("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
    //              }
    //         }


    //     }
    // }
    

// ***************SORT 0 AND 1*************

vector<int>arr{0,1,1,0,1,0,0,1};

int i=0;
int start=0;
int end=arr.size()-1;

while(start<end){

    if(arr[i]==0){
        swap(arr[start],arr[i]);
        start++;
        i++;
    }
    if(arr[i]==1){
        swap(arr[i],arr[end]);
        end--;
    }
}
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<",";
}

}