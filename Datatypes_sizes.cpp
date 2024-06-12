//Datatypes and their sizes
#include<iostream>
using namespace std;
int main(){

    int a=5; //4bytes and 32bit 
    cout<<"Details of Integer: "<<endl;
    cout<<a << endl;
    int sizea=sizeof(a);
    cout<<sizea<<endl;
    cout<<" "<<endl;

    char b='c'; //1bytes and 8 bit
    cout<<"Details of Character: "<<endl;
    cout <<b <<endl;
    int sizeb=sizeof(b);
    cout<<sizeb<<endl;
    cout<<" "<<endl;

    float d=1.23; //8 bytes and 64 bit
    cout<<"Details of Float: "<<endl;
    cout<<d <<endl;
    int sized=sizeof(d);
    cout<<sized<<endl;
    cout<<" "<<endl;

    bool f=3; // 1 bytes and 8 bit
    cout<<"Details of Boolean: "<<endl;
    cout<<f<<endl;
    int sizef=sizeof(f);
    cout<<sizef<<endl;
    cout<<" "<<endl;

    double j=5.64;//8 bytes and 64 bit
    cout<<"Details of double: "<<endl;
    cout <<j<<endl;
    int sizej=sizeof(j);
    cout<<sizej<<endl;
    cout<<" "<<endl;

}
