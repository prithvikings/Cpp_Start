//Reverse Integer

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    int rev=0;
    int ld;
    while(n!=0){
        ld=n%10;
        if((rev>INT_MAX/10)||(rev<INT_MIN/10)){
            return 0;
        }
        rev=rev*10+ld;
        n=n/10;
    }   

        cout<<rev;
}