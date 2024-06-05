/*#include<iostream>
#include<limits>
#include<limits.h>
using namespace std;


int getMin(int num[], int size){
    int min=INT_MAX;

    for(int i=0;i<size;i++){
        if(num[i]<min){
            min=num[i];
        }
    }

    return min;
}



int getMax(int num[], int size){
    int max=INT_MIN;

    for(int i=0;i<size;i++){
        if(num[i]>max){
            max=num[i];
        }
    }

    return max;
}

int main(){
    int size;
    cin>>size;
    int num[100];


    //taking input
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<" Maximum: "<<getMax(num, size)<<endl;
    cout<<" Minimum: "<<getMin(num, size)<<endl;
}*/

//Another method of using prebuilt function
/*#include<iostream>
#include<limits>
#include<limits.h>
using namespace std;


int getMin(int num[], int size){
    int mini=INT_MAX;

    for(int i=0;i<size;i++){
        mini=min(mini,num[i]);
    }

    return mini;
}



int getMax(int num[], int size){
    int maxi=INT_MIN;

    for(int i=0;i<size;i++){
        maxi=max(maxi,num[i]);
    }

    return maxi;
}

int main(){
    int size;
    cin>>size;
    int num[100];


    //taking input
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<" Maximum: "<<getMax(num, size)<<endl;
    cout<<" Minimum: "<<getMin(num, size)<<endl;
}*/

