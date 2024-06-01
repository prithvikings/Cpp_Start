//print number 1ton
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int i=1;
    while(i<=n){
        cout<<i;
        i++;
    }
    //Same thing with different loop
    for(int i=1;i<=n;i++){
        cout<<i;
    }
}