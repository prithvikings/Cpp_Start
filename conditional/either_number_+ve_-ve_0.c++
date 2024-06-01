//Either number is +ve,-ve,0
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number of a: "<<endl;
    cin>>a;
    if(a>0){
        cout<<"Number is +ve"<<endl;
    }else if(a<0){
        cout<<"Number is -ve"<<endl;
    }else if(a==0){
        cout<<"Number is 0"<<endl;
    }else{
        cout<<"Invalid Input"<<endl;
    }
}  