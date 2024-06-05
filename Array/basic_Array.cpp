//Have to Search-:
//How we can initialize entire array with only one number
#include<iostream>
using namespace std;
int main(){

    //declare
    int number[10];

    //accessing an array 
    cout<<"Value at 9 index"<<number[9]<<endl; //here it will print garbage value cause the value at this index is not initialize

    int second[5]={3,2,4,6,7};
    cout<<"Value of second array at 0 index:"<<' '<<second[0]<<endl;
    cout<<"Value of second array at 1 index:"<<' '<<second[1]<<endl;
    cout<<"Value of second array at 2 index:"<<' '<<second[2]<<endl;
    cout<<"Value of second array at 3 index:"<<' '<<second[3]<<endl;
    cout<<"Value of second array at 4 index:"<<' '<<second[4]<<endl;

    cout<<endl;
    int third[15]={2,7};
    int n=15;
    cout<<" Printing the array" <<endl;
    //print the array

    for(int i=0;i<n;i++){
        cout<< third[i]<<' ';
    }


    cout<<endl;

    //initialising all location with 0
    int four[10]={0};
    n=10;
    cout<<" Printing the array" <<endl;
    //print the array

    for(int i=0;i<n;i++){
        cout<< four[i]<<' ';
    }
    

    cout<<endl;


    int five[10]={1};
    n=10;
    cout<<" Printing the array" <<endl;
    //print the array

    for(int i=0;i<n;i++){
        cout<< five[i]<<' ';
    }

    return 0;
}