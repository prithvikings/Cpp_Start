#include<iostream>
using namespace std;
int main(){
    int arr[5]={23,1,189,23,7};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<' ';
    }cout<<endl;
    for(int i=0;i<5-1;i++){
        int index=i;
        for(int j=i+1;j<5;j++){
            if(arr[index]>arr[j]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<' ';
    }cout<<endl;
}