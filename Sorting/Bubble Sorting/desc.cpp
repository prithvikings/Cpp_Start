#include<iostream>
using namespace std;
int main(){
    int arr[5]={123,1,23,2,90};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<' ';
    }cout<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<' ';
    }cout<<endl;
}