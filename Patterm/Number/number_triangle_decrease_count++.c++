//1234
//567
//89
//10

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<count;
            count++;
        }cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=i;
        while(j<=n){
            cout<<count;
            count++;
            j++;
        }cout<<endl;
        i++;
    }
}