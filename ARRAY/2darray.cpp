#include <iostream>
#include<vector>
using namespace std;

int main()
{
// *****************2D ARRAY ROW WISE SUM PRINT********
    // int arr[3][3];

    // int rows = 3;
    // int column = 3;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < column; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // for (int i = 0; i < rows; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < column; j++)
    //     {
    //         cout << arr[i][j] << " ";

    //         sum = sum + arr[j][i];
    //     }

    //     cout << "sum is " << sum;
    //     cout << endl;
    // }



    // *********ELEMENT FIND IN ARRAY************

    // int arr[3][3];
    // int rows=3;
    // int col=3;
    
    // int key;
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<col;j++){

    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cin>>key;
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<col;j++){
    //         if(key==arr[i][j]){
    //             cout<<"number found"<<key;

            
    //     }
    //     else{
    //         cout<<"not found number";
    //     }
    
    
    // }


    // ***********TRANSPOSE OF MATRIX************
    // int arr[3][3];
    // int row=3;
    // int col=3;

    // cout<< "enter the elemen of array "<<endl;

    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){

    //         cin>>arr[i][j];
    //     }
    // }

    // for(int i=0; i<row; i++){
    //     for(int j=0; j<col; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"Transpose of array is----"<<endl;
    // for(int i=0; i<row; i++){

    //     for(int j=0; j<col; j++){

    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // 
    
    // ***********2D VECTOR **************

 
vector<vector<int> >arr;

vector<int> a{1,2,3};
vector<int> b{4,5,6};
vector<int> c{2,5,8};

arr.push_back(a);
arr.push_back(b);
arr.push_back(c);

for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[0].size();j++){
        cout<<arr[i][j]<<"  "; 
    }
    cout<<endl;
}


   return 0; 
}
