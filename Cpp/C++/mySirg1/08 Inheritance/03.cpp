// Virtual functions 
#include<iostream>
using namespace std;

class A{
    int a;
    public:
    virtual void show(){
        cout<<"show : A\n";
    }
    void take(){
        cout<<"Take : A\n";
    }
};

class B:public A{
    int b;
    public:
    void show(){
        cout<<"show : B\n";
    }
    void take(){
        cout<<"Take : B\n";
    }
    void display(){
        cout<<"Display ; B\n";
    }
    void insert(){
        cout<<"Insert : B\n";
    }
};

int main(){
    B b1;
    A *ptr=&b1;
    // b1.show();
    ptr->show();
    ptr->take();
    return 0;
}