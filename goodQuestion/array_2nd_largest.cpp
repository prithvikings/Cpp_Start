//find the second largest element in the given array.
/*#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,56,58,4};
    int mx=arr[0];
    int smx=arr[0];
    for(int i=0;i<5;i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }
    for(int j=0;j<5;j++){
        if(smx<arr[j]&&arr[j]!=mx){
            smx=arr[j];
        }
    }cout<<smx;
}*/

#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,52,35,1};
    int mx=arr[0];
    int smx=arr[0];
    for(int i=0;i<5;i++){
        mx=max(mx,arr[i]);
    }cout<<mx<<endl;

    for(int i=0;i<5;i++){
        if(smx<arr[i]&&arr[i]!=mx){
            smx=arr[i];
        }
    }cout<<smx;
}