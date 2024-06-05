/*Question Input size of array 5 elements 2,7,1,-4,11
output sum-17 print sum of all elements in array*/
//reverse  an array
//2 tarika hota hai jab array odd length ka hota hai and agar array even length ka hota hai
/*#include<iostream>
using namespace std;
void reverse(int num[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(num[start],num[end]);
        start++;
        end--;
    }
}
void printArray(int num[],int size){
    for(int i=0;i<size;i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[4]={2,7,5,9};
    int brr[5]={5,6,5,3,2};
    reverse(arr,4);
    reverse(brr,5);
    printArray(arr,4);
    printArray(brr,5);
}*/




/*#include<iostream>
using namespace std;
bool search(int num[],int size,int key){
    for(int i=0;i<size;i++){
        if(num[i]==key){
            return 1;
        }
    }return 0;
}
int main(){
    int arr[10]={3,4,5,2,3,32,43,34,12,65};
    int key;
    cin>>key;
    bool found=search(arr,5,key);
    if(found){
        cout<<"It is present";
    }else{
        cout<<"It is not Present";
    }
}*/
//swap alternate in array
//find unique in array
//find duplicate in array
//Array intersection
//pair sum
//triplet sum
//sort 0's & 1's