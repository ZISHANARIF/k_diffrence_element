#include<iostream>
#include<string.h>
using namespace std;



// /*char ch[100];

// cin>>ch;

// cout<<"character is "<<ch<<endl;

//     return 0;*/

//     /*int getlength(char name[]) {
//         int length=0;
//         int i=0;


//     while(name[i] != '\0'){
//         length++;
//         i++;
//     }
//     return length;
//     }
//     int main(){
   
//         char name[100];
//         cin>>name;
//         cout<<"length is "<<getlength(name)<<endl;
// }*/

// int reversesting(char name[]){

//     int i=0;
//     int getlength(char name[]) {
//         int length=0;
//         int i=0;
//     int n= getLength(name);
//     int j=n-1;

//     while(i<=j){
//         swap(name[i],name[j]);
//         i++;
//         j--;
//     }
// }
// }



// int main(){

//      char name[100];
//         cin>>name;
//         cout<<"length is "<<reversesting(name)<<endl;

//         cout<<"initial "<<name<<endl;
//         reversesting(name);

//         cout<<"after swap "<<name;

// }
/*
void replacespace(char sentence[ ]){

    int i=0;
    int n=strlen(sentence);
    for(int i=0;i<n;i++){
        if(sentence[i] == ' '){
             sentence[i]='@';

        }
    }

}

int main(){

    char sentence[100];
    cin.getline(sentence,100);

    replacespace(sentence);
    cout<<"printing sntence"<<endl<<sentence<<endl;
    return 0;
}*/
// ***************PALINDROME******************
/*int main(){

char ch[8]={"zishan"};
int size=7;
int end=size-1;

for(int i=0;i<size;i++){
    
    if(ch[i]==ch[end]){
        cout<<ch[i]<<" ";
        end--;
    }  
}
    return 0;
}*/
/*
bool check(char word[]){
    int i=0;
    int n=strlen(word);
    int j=n-1;

    while(i<=j){
        if(word[i]!=word[j]){
            return false;
        }
        else{ 
            i++;
            j--;
        }
    }
    return true;
}

int main(){
char arr[10]="loli";

cout<<"palindrome check:"<<check(arr);

return 0;
}*/

// ***************LOWER CASE TO UPPER CASE***********
/*
void convert(char arr[]){
    int n =4;

    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'a'+'A';
    }
}



int main(){
    char arr[10]="loli";
    convert(arr);

    cout<< arr;

    return 0;
}*/
// *********UPPER CASE TO LOWER CASE************

void convert(char arr[]){
    int n=6;
    for(int i=0;i<n;i++){
        arr[i]=arr[i]+'A'-'a';
    }
}

int main(){

    char arr[10]="zishan";

    convert(arr);
    cout<<arr;
}