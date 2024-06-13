#include<iostream>
using namespace std;
void reverse(int num[],int i,int j){
    while(i<j){
        swap(num[i],num[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int k;
    cin>>k;
    int n=sizeof(arr)/sizeof(int);
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
