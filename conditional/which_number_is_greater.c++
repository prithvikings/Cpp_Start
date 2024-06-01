//Which number is greater
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number a: "<<endl;
    cin>>a;
    cout<<"Enter number b: "<<endl;
    cin>>b;
    if(a>b){
        cout<<"a is greater than b"<<endl;
    }else if(a<b){
        cout<<"b is greater than a"<<endl;
    }else{
        cout<<"a and b both are equal"<<endl;
    }
}