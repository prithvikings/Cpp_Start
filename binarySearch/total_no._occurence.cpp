//Total No. of Occurence of any number
#include<iostream>
using namespace std;
int binaryFirst(int num[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(num[mid]==key){
            ans=mid;
            end--;
        }else if(num[mid]<key){
            start++;
        }else{
            end--;
        }mid=start+(end-start)/2;
    }return ans;
}
int binarySecond(int num[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(num[mid]==key){
            ans=mid;
            start++;
        }else if(num[mid]<key){
            start++;
        }else{
            end--;
        }mid=start+(end-start)/2;
    }return ans;
}
int main(){
    int arr[5]={1,2,2,2,2};
    int fr=binaryFirst(arr,5,2);
    int sr=binarySecond(arr,5,2);
    cout<<sr-fr+1;
}
