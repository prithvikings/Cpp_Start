//count the number of elements in given array greater than a given number x
#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,5,73,1};
    int count=0;
    int x;
    cout<<"Enter number X: "<<' ';
    cin>>x;
    for(int i=0;i<5;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count;
}