#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getmax(int num[],int size){
    int maxi=num[0];
    for(int i=0;i<size;i++){
        if(num[i]>maxi){
            maxi=num[i];
        }
    }return maxi;
}
bool ispossible(int num[],int stall,int k, int mid){
    int cowCount=1;
    int lastpost= num[0];
    for(int i=0;i<stall;i++){
        if(num[i]-lastpost>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastpost=num[i];
        }
    }return false;
}
int aggressive(int num[],int stall,int k){
    int start=0;
    int end=getmax(num,stall);
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(ispossible(num,stall,k,mid)){
            ans=mid;
            start++;
        }else{
            end++;
        }mid=start+(end-start)/2;
    }return ans;
}
int main(){
    int stall;
    cout<<"Enter number of Stall: ";
    cin>>stall;
    int arr[100];
    cout<<"Enter stall array: ";
    for(int i=0;i<stall;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter number of cows: ";
    cin>>k;
    int index=aggressive(arr,stall,k);
    cout<<index;
}
