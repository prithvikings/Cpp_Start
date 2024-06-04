//print all number from 1to10 except 6.
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==6){
            continue;
        }else{
            cout<<i<<endl;
        }
    }
}*/
//print all the number from 5 to 50 only odd nnumbers
#include<iostream>
using namespace std;
int main(){
    for(int i=5;i<=50;i++){
        if(i%2==0){
            continue;
        }else{
            cout<<i<<endl;
        }
    }
}
