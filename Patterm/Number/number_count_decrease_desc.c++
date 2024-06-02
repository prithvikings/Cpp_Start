//123
//234
//34
//4
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        while(j<=n){
            cout<<j;
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
        for(int j=i;j<=n;j++){
            cout<<j;
        }cout<<endl;
    }
}