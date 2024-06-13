//Find Pivot of Array

#include<iostream>
using namespace std;
int getpivot(int num[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(num[mid]>=num[0]){
            start++;
        }else{
            end--;
        }mid=start+(end-start)/2;
    }return start;
}
int main(){
    int arr[5]={8,10,17,1,3};
    cout<<"Pivot is "<<getpivot(arr,5)<<endl;
}
