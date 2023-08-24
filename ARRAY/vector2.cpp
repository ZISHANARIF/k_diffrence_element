#include<iostream>
#include<vector>
using namespace std;
// int main(){

// vector<int> arr;

// arr.push_back(5);
// arr.push_back(6);

// for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
// }

// cout<<endl;
// int n;
// cout<<"Enter the value of n"<<endl;
// cin>>n;

// vector<int>brr(n,12);
// cout<<"Size of b"<<brr.size()<<endl;

// for(int i=0;i<brr.size();i++){
//     cout<<brr[i]<<" ";
// }

// ********FIND UNIQUE ELEMENT************

// int findunique(vector<int> arr){
//     int ans=0;

//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main(){

// int n;
// cout<<"Enter the size of array"<<endl;
// cin>>n;

// vector<int>arr(n);

// cout<<"Enter the element ";

// for(int i=0;i<arr.size();i++){
//     cin>>arr[i];
// }

// int uniqueelement=findunique(arr);
// cout<<"Unique Element is "<<uniqueelement<<endl;


// }

// *************UNION OF ARRAY*****************
// int main(){
//     int arr[]={1,2,3,4,5};
//     int sizea=5;
//     int brr[]={2,3,4};
//     int sizeb=3;

//     vector<int>ans;

//     // push all element of vector arr
//     for(int i=0;i<sizea;i++){
//         ans.push_back(arr[i]);
//     }
//     // push all element of brr
//     for(int i=0;i<sizeb;i++){
//         ans.push_back(brr[i]);
//     }
//     // /print ans
//     cout<<"Printing ans array"<<endl;
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }

// }
// ***********INTERSECTION OF VECTOR**************
// 
// *****************PAIR SUM*******************
// int main(){
//     int sum=80;

//     vector<int>arr{10,20,30,40,50};

//     // print all pairs
//     // outer loop traverse
//     for(int i=0;i<arr.size();i++){
//         int element=arr[i];

//         // every element travere of aage wale elements
//         for(int j=i+1;j<arr.size();j++){
//             if(element+arr[j]==sum){
//             cout<<"("<<element<<","<<arr[j]<<")"<<endl;
//         }
//     }
//            }       
// }

// *********TRIPLATE NUMBER**************

// int main(){
//     vector<int> arr{10,20,30,40};
//     int sum =90;
//     for(int i=0;i<arr.size();i++){
//         int element1=arr[i];
//         for(int j=i+1;j<arr.size();j++){
//             int element2=arr[j];

//             for(int k=j+1;k<arr.size();k++){
//                  int element3=arr[k];

//                  if(element1+element2+element3==sum){
//                     cout<<"("<<element1<<","<<element2<<","<<element3<<")";
//                  }
//             }


            
//         }
//     }

//     return 0;
// }


// *************SORT ZERO AND ONE************

int main(){

vector<int>arr{0,1,0,1,0,0,1,1,0};

int start=0;
int end=arr.size()-1;
int i=0;

while(start<end){
    if(arr[i]==0){
        swap(arr[start],arr[i]);
        i++;
        start++;
    }
    if(arr[i]==1){
        swap(arr[i],arr[end]);
        end--;
      
    }
}
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
    return 0;
}