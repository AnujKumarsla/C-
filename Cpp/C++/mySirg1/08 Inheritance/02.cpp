// Constructor and destructor in Inherritance
#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(int x=0){
        a=x;
        cout<<"Constructor : A"<<endl;
    }
    ~A(){
        cout<<"Destructor : A"<<endl;
    }
    void out(){
        cout<<a<<" out : A"<<endl;
    }
};
class B:public A{
    int b;
    public:
    B(int x, int y):A(x){
    // B(int x, int y):A(x){
        b=y;
        cout<<"Constructor : B"<<endl;
    }
    ~B(){
        cout<<"Destructor : B"<<endl;
    }
    void show(){
        cout<<b<<" Show : B"<<endl;
    }
};
int main(){
    B b1(7,6);
    b1.out();
    b1.show();
    return 0;
}