//1
//23
//456
//78910

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }cout<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }cout<<endl;
        i++;
    }
}