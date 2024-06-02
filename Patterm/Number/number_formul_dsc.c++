//4321
//432
//43
//4

/*#include<iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<j;
        }cout<<endl;
    }
}*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>=i){
            cout<<j;
            j--;
        }cout<<endl;
        i++;
    }
}
