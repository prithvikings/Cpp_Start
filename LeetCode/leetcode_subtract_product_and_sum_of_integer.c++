//1281. Subtract the product and sum of digits of an integer
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    int ld;
    int sum=0;
    int prod=1;
    while(n!=0){
        ld=n%10;
        sum=sum+ld;
        prod=prod*ld;
        n=n/10;
    }
    int sub=prod-sum;
    cout<<sub;
}

//input-234
//output-15
