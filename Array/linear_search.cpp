#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }else{
            return 0;
        }
    }
}
int main(){
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

    //whether 1 is present in it or not ?
    cout<<"Enter The Key Which You are Searching: "<<endl;
    int key;
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<<"Key is Present"<<endl;
    }else{
        cout<<"Key is not Present"<<endl;
    }
    return 0;
}

//Without Function
/*#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,3,45,6,4,3,52,7,1,9};
    int key;
    cout<<"Enter the Key: ";
    cin>>key;
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            cout<<"It is Present";
            break;
        }else{
            cout<<"It is not Present";
            break;
        }
    }
}*/