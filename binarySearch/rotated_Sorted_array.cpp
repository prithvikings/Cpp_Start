//Search in rotated sorted array
/*

You have been given a sorted array consisting of 'N' elements you are given an integer 'K'

Now the array is rotated at some pivot point unknown to you for Example if Array=[1,3,5,7,8] Then after roating array at index 3 the array will be arr=[7,8,1,3,5]

Now your task is to find the index at which 'K' is present in array. */

#include<iostream>
using namespace std;


//Function to Find the Pivot (index of the smallest element) 
int getPivot(int num[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(num[mid]>=num[0]){
            start++;
        }else{
            end=mid;
        }mid=start+(end-start)/2;
    }return start;
}


//Function to perform binary Search
int binarySearch(int num[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(num[mid]==key){
            return mid;
        }else if(num[mid]<key){
            start++;
        }else{
            end--;
        }mid=start+(end-start)/2;
    }return -1;
}


int main(){
    int arr[5]={7,8,1,3,5};//Example of rotated sorted array
    int key=3;
    int n=5;

    int pivot=getPivot(arr,n);
    int result;
    if(key>=arr[pivot]&&key<=arr[n-1]){
        result=binarySearch(arr,pivot,n-1,key);
    }else{
        result= binarySearch(arr,0,pivot-1,key);
    }
    cout<<result;
    
}
