//leetcode -69 sqrt(x)
/*Given a non negative integer x, compute and return the square root of x.
since the return  type is an integer the decimal digits are truncated and onlt the integer part of the result is returned

you are not allowed to use external built in function like pow(x,0.5) or x**0.5.*/

//Have to solve this by using binarySearch

//This is brute force method But this not applicable for this question but we can use this one also for easiness.

/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=25;
    int power=0;
    for(int i=1;i<=n;i++){
        power=pow(i,2);
        if(power==n){
        cout<<i;
        break;
    }
    }
}*/

#include<iostream>
using namespace std;
int binarySearch(int n){
    int start=0;
    int end=n;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        int square=mid*mid;
        if(square==n){
            return mid;
        }else if(square<n){
            ans=mid;
            start++;
        }else{
            end--;
        }mid=start+(end-start)/2;
    }return ans;
}
int main(){
    int n=25;
    cout<<binarySearch(n);
}



//For more Precise solution

/*#include<iostream>
using namespace std;
int binary(int n){
    int start=0;
    int end=n;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        int square=mid*mid;
        if(square==n){
            return mid;
        }else if(square<n){
            ans=mid;
            start++;
        }else{
            end--;
        }mid=start+(end-start)/2;
    }return ans;
}

double morePrecise(int n,int precision,int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
    }return ans;
}
int main(){
    int n=25;
    cout<<"Enter a number: ";
    cin>>n;
    int tempSol=binary(n);
    cout<<"Answer is "<<morePrecise(n,3,tempSol)<<endl;
    return 0;
}*/
