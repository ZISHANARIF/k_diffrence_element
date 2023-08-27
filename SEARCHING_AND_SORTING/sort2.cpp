#include <iostream>
using namespace std;

// int findsqurt(int n)
// {

//     int start = 0;
//     int end = n;
//     int mid = start + (end - start) / 2;

//     int ans ;
//     while (start <= end)
//     {
//         if (n == mid * mid)
//         {
//             return mid;
//         }
//         if (mid * mid > n)
//         {
//             // left search
//             end = mid - 1;
//         }
//         else
//         {
//             // ans store
//             ans = mid;
//             start = mid + 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// int main()
// {

//     int n;
//     cout << "Enter the number for finding sqrt " << endl;
//     cin >> n;

//     int ans = findsqurt(n);

//     cout << " answer is " << ans;

//     return 0;
// }



// *******FIND FLOAT SQUARE VALUE********

int findsquare(int n){
    int start=0;
    int end=n;
    int mid=start+(end-start)/2;
    int ans;

    while(start<=end){

        if(n==mid*mid){
            return ans;
        }
        if(mid*mid>n){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
             mid=start+(end-start)/2;

    }
        return ans;
    
}

int main(){
 cout<<"Enter the number "<<endl;
 int n;
 cin>>n;

 int ans=findsquare(n);

 cout<<"answer is "<<ans<<endl;

 int precision;
 cout<<"Enter the number for decimal point "<<endl;
 cin>>precision;
 
 double step=0.1;
 double finalans=ans;
 for(int i=0;i<precision;i++){

    for(double j=finalans;j*j<=n;j=j+step){
        finalans=j;
    }
    step=step/10;
 }
 cout<<"Final answer is "<<finalans<<endl;
    return 0;
}