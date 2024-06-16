#include<iostream>
using namespace std;
bool ispossible(int num[],int n,int m,int mid){
        int studentCount=1;
        int pageSum=0;
        for(int i=0;i<n;i++){
            if(pageSum+num[i]<=mid){
                pageSum+=num[i];
            }else{
                studentCount++;
                if(studentCount>m || num[i]>mid){
                    return false;
                }
                pageSum=num[i];
            }
        }
    return true;
}
int binarySearch(int num[],int n,int m){
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=num[i];
    }
    int end=sum;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(ispossible(num,n,m,mid)){
            ans=mid;
            end--;
        }else{
            start++;
        }mid=start+(end-start)/2;
    }return ans;
}
int main(){
    int n;
    cout<<"Enter the no. of Book: "<<endl;
    cin>>n;
    int m;
    cout<<"Enter the no. of student: "<<endl;
    cin>>m;
    int arr[100];
    cout<<"Enter the no. of page: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=binarySearch(arr,n,m);
    cout<<"The minimum no. of max pages alloted to a student is : "<<index;
}
