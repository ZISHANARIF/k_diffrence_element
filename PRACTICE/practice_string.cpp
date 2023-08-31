#include<iostream>
#include<string.h>
using namespace std;

/*
int main(){

   string str={"abbaabcaada"};

   int i=0;
     string ans="";

    while(i<str.length()){

        if(ans.length()>0 && ans[ans.length()-1] ==str[i]){

            ans.pop_back();
        }
        else{
            ans.push_back(str[i]);
        }
        i++;
    }
    cout<<ans;

}*/

//******REMOVE ALL OCCURENCE OF SUBSTRING*******
/*
int main(){

    string str={"daabcbaabcbc"};
    string part={"abc"};

    int pos=str.find(part);

    while(pos!=string::npos){
        str.erase(pos,part.length());
        pos=str.find(part);
    }
    cout<<str;
}*/
// *******VALID PALINDROME**********
/*
bool check(string s,int i,int j){

    while(i<=j){
        if(s[i]!=s[j]){
            return false;
            i++;
            j--;      
        }
    }
        return true;
}
bool valid(String s){
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return check(s,i+1,j)|| valid(s, i, j-1);
        } 
        else{
            i++;
            j--;
        }
    } 
}
int main(){
    
}*/
/*
int main(){

string s={"abbaa"};

int i=0;
string ans="";
int j=s.length()-1;

while(i<=j){

    if(s[i]==s[j]){
        ans.push_back(s[i]);      
    }
    
   
        if(s[i]!=s[j]||s[i+1]==s[j]){
            s.pop_back();
        }
           

            if(s[i]!=s[j]||s[i]==s[j-1]){
            s.pop_back(s[j]);
             
            }
             
              
    
    i++;
    j--;  
    // cout<<ans;     
}
    cout<<ans;
}*/


