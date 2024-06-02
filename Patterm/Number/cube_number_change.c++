//123
//123
//123
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){//row
        for(int j=1;j<=n;j++){//column
            cout<<j;
        }cout<<endl;
    }
}

//Another Way of Doing This
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }cout<<endl;
        i++;
    }
}