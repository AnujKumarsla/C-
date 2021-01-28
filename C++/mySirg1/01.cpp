//Variables 

#include<iostream>

using namespace std;
int main(){
    int a=2,b=3;
    int *c;
    int &d=b;
    c=&a;
    cout<<"The value c="<<*c<<" the value d="<<d<<"\n";
    *c=4; d=9;
    cout<<"The value c="<<*c<<" the value d="<<d<<"\n";
    cout<<"The value a="<<a<<" the value b="<<b<<"\n";

    return 0;
}