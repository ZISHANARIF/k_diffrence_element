#include<iostream>
using namespace std;
/*
class fruit{
    public:
    string name;
    string color;

};

int main(){

    fruit apple; //object

    apple.name="apple";
    apple.color="green";

    cout<<apple.name<<"-"<<apple.color<<endl;

    // we create new keyword using new 

    fruit *mango=new fruit();

    // can't use . coz we make pointer variable 

    mango->name="mango";
    mango->color="yellow";

    cout<<mango->name<<" "<<mango->color;


    return 0;
}*/
    // ************constractor*************

    class rectangle{    //default constractor no args passed
        public:
        int l=0;
        int b=0;
    };


    int main(){

        rectangle r1;

        cout<<r1.l<<" "<<r1.b;

        return 0;
    }