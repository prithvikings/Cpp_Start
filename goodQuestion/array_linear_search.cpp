#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,1,5,2};
    bool found=false;
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            found=true;
        }
    }
    if(found==true){
        cout<<"The key is found";
    }else{
        cout<<"The Key is not found";
    }
}