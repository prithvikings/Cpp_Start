//Switch case ke case mein integer aur character ki value leta hai but float and string ki value nahi leta

//continue not use in switch it is not valid
//use of exit() learn


/*#include<iostream>
using namespace std;
int main(){
    int n=3;
    cout<<endl;
    switch( n ){
        case 1: cout<<"First"<<endl;
        break;
        case 2: cout<<"Second"<<endl;
        break;
        default:cout<<"It is default case"<<endl;
    }
    cout<<endl;
    return 0;
}*/

//nested switch
/*#include<iostream>
using namespace std;
int main(){
    char ch='A';
    int num=1;
    cout<<endl;
    switch(ch){
        case 1:cout<<"First"<<endl;
        cout<<"First again"<<endl;
        break;

        case '1':switch(num){
            case 1: cout<<"value of num is "<<num<<endl;
            break;
        }break;
        default:cout<<"It is default case"<<endl;
    }
}*/


//calculator
/*#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter First Number: "<<endl;
    cin>>a;
    int b;
    cout<<"Enter Second Number: "<<endl;
    cin>>b;
    char opr;
    cout<<"Enter Operator : + , - , / , * "<<endl;
    cin>>opr;
    switch(opr){
        case '+':
        cout<< a <<'+'<< b << '='<<a+b<<endl;
        break;

        case '-':
        cout<< a <<'-'<< b << '='<<a-b<<endl;
        break;

        case '*':
        cout<< a <<'*'<< b << '='<<a*b<<endl;
        break;

        case '/':
        cout<< a <<'/'<< b << '='<<a/b<<endl;
        break;

        default:
        cout<<"You have entered wrong operator"<<endl;
    }
    cout<<endl;

}*/

