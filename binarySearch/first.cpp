#include<iostream>
using namespace std;
int binarySearch(int num[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(num[mid]==key){
            return mid;
        }

        if(num[mid]<key){
            start+=mid;
        }else{
            end-=mid;
        }mid=start+(end-start)/2;
    }return -1;
}
int main(){
    int odd[5]={2,4,57,87,90};
    int even[6]={2,4,57,87,90,97};
    int oddindex=binarySearch(odd,5,87);
    int evenindex=binarySearch(even,6,97);
    cout<<oddindex<<' '<<endl;
    cout<<evenindex<<' '<<endl;

}