//Check if given N is Prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number n: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"It is Not Prime Number.";
            break;
        }else if(n==2){
            cout<<"It is Prime Number.";
        }
        else{
            cout<<"It is Prime Number.";
            break;
        }
    }
}