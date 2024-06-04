/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b;
    cout<<"ENTER THE NUMBER: ";
    cin>>a;
    cout<<"ENTER THE POWER NUMBER: ";
    cin>>b;
    int power=pow(a,b);
    cout<<power;
    cout<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"ENTER THE NUMBER: ";
    cin>>a;
    cout<<"ENTER THE POWER NUMBER: ";
    cin>>b;
    int ans=1;
    for(int i=1;i<=b;i++)
    ans=a*ans;
    cout<<ans;
    cout<<endl;
    return 0;
}


#include<iostream>
#include<math.h>
using namespace std;
int power(int a,int b){
    int p=pow(a,b);
    return p;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int ans=power(a,b);
    cout<<ans;
    return 0;
}
