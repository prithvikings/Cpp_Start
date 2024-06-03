//Palindrome
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int ld;
    int rev=0;
    int temp=n;
    while(n!=0){
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(rev==temp){
        cout<<"It is palindrome";
    }else{
        cout<<"It is not palindrome";
    }
}