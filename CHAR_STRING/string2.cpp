#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <limits.h>
using namespace std;

// ***********REMOVE DUPLICATE NUMBER***********
/*
int main(){

    string str={"abbaca"};

    string ans="";
    int i=0;

    while(i<str.length()){

       
            if(ans.length() >0 && ans[ans.length()-1] ==str[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(str[i]);
            } 
            i++;   
    }
    cout<<ans;

}*/

// *************REOMOVE ALL OCCURENCE SUBSTRING*********
/*
int main(){

    
    string str {"daabcbaabcbc"};
    string part {"abc"};

    int pos=str.find(part);

    while(pos !=string::npos){
        str.erase(pos,part.length());
        pos=str.find(part);
    }
    cout<<str;


}*/
// ******VALID PALINDROME********

// **********MINIMUM TIME DIFFRENCE***************
/*
int findmindiffrence(vector<string>& timepoint){
    vector<int> minute;

    for(int i=0;i<timepoint.size();i++){
        string curr=timepoint[i];

        int hours=stoi(curr.substr(0,2));
        int min=stoi(curr.substr(3,2));
        int totalminute=hours*60 + min;
        minute.push_back(totalminute);
    }
    // step 2 sort
    sort(minute.begin(),minute.end());

    // step 3 diffrence and calculate min diff

    int mini = INT_MAX;
    int n=minute.size();

    for(int i=0;i<n-1;i++){
        int diff=minute[i+1]-minute[i];
        mini=min(mini,diff);
    }
    // something missing  main hai ************

    int lastdiff1=(minute[0]+1440)-minute[n-1];
    int lastdiff2=minute[n-1]-minute[0];
    int lastdiff=min(lastdiff1,lastdiff2);
    mini=min(mini,lastdiff);
     return mini;
}

int main(){
    vector<string>timepoint={"23:59","00:10"};

     int val=findmindiffrence(timepoint);
     cout<<val;
}*/


// ********PALINDROMIC SUBSTRING************

int substring(string s,int left,int right){
    int count=0;
    // jab tak match karenge tab tak count increment kar do and i piche kar
    while(left>=0&& right<s.length() && s[left]==s[right]){
        count++;
        left--;
        right++;
    }
    return count;
}
    int main(){

     string s={"abc"};

int countsubstring(string s);
    int count=0;
    int n=s.length();

    for(int center=0;center<n;center++){
        // odd
        int oddans=substring(s,center,center);
        count=count+oddans;
        // even ans
        int evenans=substring(s,center,center+1);
        count=count+evenans;
    }
    cout<< count;
}


