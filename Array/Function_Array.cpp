/*Normal variable ka size janne ke liye hum log size of operator ka use 
karte hai but for array hum log
sizeof(array_variable_name)/sizeof(int)
ka use karte hai
iska bhi hume bahut rare use karna hai kyunkki issey hume length of array pata chalta hai
but actual size nahi isliye hum log humesa function mein size khud se dete hai
*/



#include<iostream>
using namespace std;
void printArray(int arr[],int size){

    cout<<" Printing the array" <<endl;

    for(int i=0;i<size;i++){
        cout<< arr[i]<<' ';
    }
    cout<<endl;
    cout<<" Printing the Done " <<endl;
    cout<<endl;
}
int main(){
    int third[15]={2,7};
    printArray(third,15);

    int fourth[10]={0};
    printArray(fourth,10);

    int fifth[10]={1};
    printArray(fifth,10);
}