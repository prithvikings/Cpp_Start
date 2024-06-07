/*#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,5,7,3};
    int sum=0;
    int ld;
    for(int i=0;i<5;i++){
        ld=arr[i]%10;
        sum=sum+ld;
        arr[i]=arr[i]/10;
    }
    cout<<sum;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,6,3,8};
    int sum=0;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }cout<<sum;
}*/

#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the Key";
    cin>>key;
    bool found=false;
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            found=true;
        }
    }
    if(found==true){
        cout<<'y';
    }else{
        cout<<'n';
    }
}