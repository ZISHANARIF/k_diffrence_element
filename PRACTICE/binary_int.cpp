  #include<iostream>
  using namespace std;

// *********FIND SQUARE ROOT**********

// int findnum(int n){
//     int start=0;
//     int end=n;
//     int mid=start+(end-start)/2;
//     int ans;

//     while(start<=end){

//         if(n==mid*mid){
//             return ans;
//         }
//         if(n<mid*mid){
//             end=mid-1;
//         }
//         else{
//             ans=mid;
//             start=mid+1;
//         }
//             mid=start+(end-start)/2;
//     }
//     return ans;

// }
//   int main(){

// int n;
// cout<<"Enter the number for finding element ";
// cin>>n;

// int ans=findnum(n);

// cout<<"square of number "<<n<<" is "<<ans;
//   }

// **********FIND LAST OCCURANCE**************

int findoccurance(int target,int size,int arr[]){
    int start=0;
    int end=size-1;
    int ans;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(target==arr[mid]){
            // value store
            ans =mid;
            start=mid+1;
        }
            if(target<arr[mid]){
                end=mid-1;
            }
                if(target>arr[mid]){
                    start=mid+1;
                }

                mid=start+(end-start)/2;
    }
                return ans;
}

int main(){
    int arr[]={1,2,3,4,4,4,4,4,4,4,4,5,5,5,5,5,5,6,6,6,6,6,6};
    int size =23;

int target;
cout<<"Enetr the number for last occurance ";
cin>>target;

int ans=findoccurance(target,size,arr);

cout<<"last occurance of number "<<target<<" is "<<ans;

    return 0;
}