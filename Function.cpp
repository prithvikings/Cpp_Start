// #include<iostream>
// #include<math.h>
// using namespace std;
// int power(int a,int b){
//     int p=pow(a,b);
//     return p;
// }
// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     int ans=power(a,b);
//     cout<<ans;
//     return 0; 
// }

/*#include<iostream>
#include<math.h>
using namespace std;
int power(){
    int a,b;
    cin>>a>>b;
    int p=pow(a,b);
    return p;
}
int main(){
    cout<<"Answer is: "<<power()<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int power(){
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=a*ans;
    }return ans;
}
int main(){
    cout<<"Answer : "<<power();
}*/
//Using Function to find odd even
/*#include<iostream>
using namespace std;
int even (int a){
    if(a%2==0){
        cout<<"Even";
    }else{
        cout<<"odd";
    }
}
int main(){
    int num;
    cin>>num;
    even(num);
}*/

//print ncr
/*#include<iostream>
using namespace std;
int fact (int x){
    int facto=1;
    for(int i=2;i<=x;i++){
        facto=facto*i;
    }return facto;
}
int main(){
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    int r;
    cout<<"Enter number r: ";
    cin>>r;
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int ncr=nfact/(rfact*nrfact);
    cout<<ncr;
}*/


//print ncr
/*#include<iostream>
using namespace std;
int fact (int x){
    int facto=1;
    for(int i=1;i<=x;i++){
        facto=facto*i;
    }return facto;
}
int ncr(int n, int r){
    int ans=fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main(){
    int n;
    cout<<"Enter number n: ";
    cin>>n;
    int r;
    cout<<"Enter number r: ";
    cin>>r;
    cout<<ncr(n,r);
}*/

//check if given number is prime or not
/*#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }return 1;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n)==1){
        cout<<"It is prime number";
    }else{
        cout<<"It is not a prime number";
    }
}*/
//Write a program to print nth term of arithmetic progression
/*#include<iostream>
using namespace std;
int ap(int x){
    int arithmetic=(3*x+7);
    return arithmetic;
}
int main(){
    int n;
    cin>>n;
    int ans=ap(n);
    cout<<ans;
}*/

//print fibonacci nth term
//isko karna hai
/*#include<iostream>
using namespace std;
int fib(int n){
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        int next=a+b;
        a=b;
        b=next;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<"Nth term is: "<<fib(n);
}*/
