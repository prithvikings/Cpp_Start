//1
//23
//345
//4567
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int val=i;
        while(j<=i){
            cout<<val;
            val++;
            j++;
        }cout<<endl;
        i++;
    }
}

/*#include<iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int val=i;
        for(int j=1;j<=i;j++){
            cout<<val;
            val++;
        }cout<<endl;
    }
}*/