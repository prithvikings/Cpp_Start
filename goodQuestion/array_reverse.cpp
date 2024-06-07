#include<iostream>
using namespace std;
void reverse(int num[],int size){
    for(int start=0,end=size-1;start<=end;start++,end--){
        swap(num[start],num[end]);
    }
}
void printarr(int num[],int size){
    for(int i=0;i<size;i++){
        cout<<num[i];
    }cout<<endl;
}
int main(){
    int arr[5]={2,3,52,1,7};
    int brr[6]={3,4,53,2,8,9};
    reverse(arr,5);
    reverse(brr,6);
    printarr(arr,5);
    printarr(brr,6);
}