//1ton find sum of all even number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        if(i%2==0){
            sum+=i;
        }
        i++;
    }
    cout<<sum;
}