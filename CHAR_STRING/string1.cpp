#include<iostream>
#include<string>
using namespace std;

// string compare funcation************
/*
bool compare(string a,string b){
    if(a.length()!=b.length())
    return false;

    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
}*/

int main(){
    // string create**************

    string str;

    // input
    cin >> str;

    // with space input
    // getline(cin,str);

    // print

    cout<<str<<" length "<<str.length()<<endl;
    cout<<str<<" is empty "<<str.empty()<<endl;

    // output me agar kuch additional add krna hai to push_back use karte hai
    str.push_back('A');
    cout<<str<<endl;

    // input me agar kuch remove krna hai to pop_back use karte hai
    str.pop_back();
    cout<<str<<endl; 

// ****************remember*****************************
    cout<<str.substr(0,4)<<endl;

// ******string compare*******

    string a="zishan";
    string b="hello";

    if(a.compare(b)==0){
        cout<<"a and b are  same"<<endl;
    }
    else{
        cout<<"a and b are not same"<<endl;
    }


    string x="gacd";
    string y="gbcd";
    cout<<x.compare(y)<<endl;
    
    // find funcation*********

    string sentence="hello ji kaise ho sare";
    string target="not";

    cout<<sentence.find(target)<<endl;
    // or

    if(sentence.find(target)==std::string::npos){
        cout<<"not found"<<endl;
    }

    // replace funcation*************


//    string str="this is my first message";
//     string word="zishan";

//     str.replace(11,5 ,word);
//     cout<<str<<endl;

//     // erase funcation**********
//     string str="abcdefghijkl";
//     str.erase(0,5);
//     cout<<str<<endl;

    return 0;
}