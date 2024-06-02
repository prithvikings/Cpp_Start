//****
//***
//**
//*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        while(j<=n){
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }
}
//Another Way of doing
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<'*';
        }cout<<endl;
    }
}