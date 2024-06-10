/*You have given a sorted array consisting of N elements you are given on integer K Now your task is to find the first and last occurence of k in array.*/

/*For Example: if Array=[0,1,1,5] and k=1 then the first and last occurences of 1 will be (0 index and 2 index)*/

//Input Format
/*The first line of input contains Integer 'T' which denotes the number of test cases or queries to be run then the test cases follow.

The first line of each test case contains two single-space seprated integer 'N' and 'K' respectively

The Second Line of each test case contains '' single-space-seprated integer denoting the elements of the array/list Arr.
*/

//Output Fromat: 
/*Return two single-space seprated integers denoting the first and the last occurence of 'k' in array.*/
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

int binaryLast(int num[],int size,int key){
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
    int arr[5]={6,6,6,6,6};
    int first=binaryFirst(arr,5,6);
    int Last=binaryLast(arr,5,6);
    cout<<"The First Occuring Index is: "<<first <<endl;
    cout<<"The Last Occuring Index is: "<<Last <<endl;
}
