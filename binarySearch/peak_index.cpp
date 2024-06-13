/*852. Peak Index in a Mountain Array
Solved
Medium
Topics
Companies
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.*/

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int start=0;
//         int end=arr.size()-1;
//         int mid=start+(end-start)/2;
//         while(start<end){
//             if(arr[mid]<arr[mid+1]){
//                 start++;
//             }else{
//                 end=mid;
//             }mid=start+(end-start)/2;
//         }return start;
//     }
// };

#include<iostream>
using namespace std;
int peak(int num[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(num[mid]<num[mid+1]){
            start++;
        }else{
            end=mid;
        }mid=start+(end-start)/2;
    }return start;
}
int main(){
    int arr[4]={0,10,5,2};
    int index=peak(arr,4);
    cout<<index;
}
