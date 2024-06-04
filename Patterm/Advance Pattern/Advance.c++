
//___*
//__**
//_***
//**** 

//yaha pe space jo hai woh n-i baar hai.
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space=n-i;
        for(int j=1;j<=space;j++){
            cout<<' ';
        }for(int k=1;k<=i;k++){
            cout<<"*";
        }cout<<endl;
    }
}*/

//Another Way of doing
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<=n){
                cout<<" ";

            }else{
                cout<<"*";
            }
        }cout<<endl;
    }
}*/

//Another way of doing
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        int j=1;
        int k=1;
        while(j<=space){
            cout<<' ';
            j++;
        }while(k<=i){
            cout<<'*';
            k++;
        }   i++;
            cout<<endl;
    }
}*/
//****
//***
//**
//*

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space=n-i+1;
        for(int j=1;j<=space;j++){
            cout<<'*';
        }cout<<endl;
    }
}*/
//Another way of doing
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<'*';
        }cout<<endl;
    }
}*/

//****
//_***
//__**
//___*

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<' ';
        }
        for(int k=i;k<=n;k++){
            cout<<'*';
        }cout<<endl;
    }
}*/

//1111
//_222
//__33
//___4

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<' ';
        }for(int k=i;k<=n;k++){
            cout<<i;
        }cout<<endl;
    }
}*/

//___1
//__22
//_333
//4444

/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<' ';
        }for(int k=1;k<=i;k++){
            cout<<i;
        }cout<<endl;
    }
}*/

//1234
//_234
//__34
//___4

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space=i-1;
        for(int k=1;k<=space;k++){
            cout<<' ';
        }
        for(int j=i;j<=n;j++){
            cout<<j;
        }cout<<endl;
    }
}*/

//___1
//__23
//_456
//78910

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<' ';
        }
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }cout<<endl;
    }
}*/

//___1___
//__121__
//_12321_
//1234321

//n=4
//space=n-i
/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<' ';
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int l=i-1;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
}*/

//1234554321
//1234**4321
//123****321
//12******21
//1********1

/*#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        // Print ascending numbers
        for(int j = 1; j <= n - i; j++) {
            cout << j;
        }
        // Print asterisks
        for(int k = 0; k < 2 * i; k++) {
            cout << '*';
        }
        // Print descending numbers
        for(int l = n - i; l >= 1; l--) {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}*/
/*  *
   ***
  *****
 *******
*********
*/
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<' ';
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<'*';
        }cout<<endl;
    }
}*/

/*  

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<' ';
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<'*';
        }cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<' ';
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<'*';
        }cout<<endl;
    }
}*/