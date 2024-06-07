#include<iostream>
using namespace std;
void reverse(int num[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(num[i],num[i+1]);
        }
    }
}
void printarr(int num[],int size){
    for(int i=0;i<size;i++){
        cout<<num[i]<<' ';
    }cout<<endl;
}
int main(){
    int arr[5]={4,5,2,52,10};
    int brr[6]={6,2,1,5,13,7};
    reverse(arr,5);
    reverse(brr,6);
    printarr(arr,5);
    printarr(brr,6);
}