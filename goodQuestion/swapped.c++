#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number a: ";
    cin>>a;
    int b;
    cout<<"Enter number b: ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The Value of a is: "<<a<<endl;
    cout<<"The Value of b is: "<<b<<endl;
}
