//321
//321
//321

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>=1){
            cout<<j;
            j--;
        }cout<<endl;
        i++;
    }
}
//Another way doing
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>=1){
            cout<<n-j+1;
            j++;
        }cout<<endl;
        i++;
    }
}

//Another way of doing
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            cout<<j;
        }cout<<endl;
    }
}