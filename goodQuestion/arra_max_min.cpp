/*#include<iostream>
#include<limits>
#include<limits.h>
using namespace std;
int getMax(int num[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(num[i],maxi);
    }return maxi;
}
int getMin(int num[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(num[i],mini);
    }return mini;
}
int main(){
    int arr[5]={2,4,3,52,6};
    cout<<"Maximum Value of Array is: "<<getMax(arr,5)<<endl;
    cout<<"Minimum Value of Array is: "<<getMin(arr,5)<<endl;
}*/

//short method
/*#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,1,5,12,5};
    int mx=arr[0];
    for(int i=0;i<5;i++){
        if(mx<arr[i]){
            mx=arr[i];
        }
    }cout<<mx;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,1,5,12,5};
    int mx=arr[0];
    for(int i=0;i<5;i++){
        mx=max(mx,arr[i]);
    }cout<<mx;
}*/

