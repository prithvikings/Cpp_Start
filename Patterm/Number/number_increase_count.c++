//123
//456
//789

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
//Another way of doing
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<count;
            count++;
        }cout<<endl;
    }
}