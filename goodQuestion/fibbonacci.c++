//Make Fibonacci Series
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int  a=0;
    int b=1;
    cout<<a<<' ';
    cout<<b<<' ';
    for(int i=1;i<=n;i++){
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
}