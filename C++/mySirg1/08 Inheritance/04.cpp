// Virtual function Examples
#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void fun1(){
        cout<<"fun1 : A\n";
    }
    virtual void fun2(){
        cout<<"fun2 : A\n";
    }
    virtual void fun3(){
        cout<<"fun3 : A\n";
    }
    virtual void fun4(){
        cout<<"fun4 : A\n";
    }
};

class B:public A{
    int b;
    public:
    // fun1 is not virtual
    void fun1(){
        cout<<"fun1 : A\n";
    }
    // fun2 is overriden /
    void fun2(){
        cout<<"fun2 : B\n";
    }
    // fun3 is not created
    // fun4 is not overriden it is hiding of funnction
    void fun4(int x){
        cout<<"fun4 : B\n";
    }
};

int main(){
    /*
    B b1;
    A *ptr=&b1;
    ptr->fun1();
    ptr->fun2();
    ptr->fun3();
    ptr->fun4();
    ptr->fun4(5);
    */
//    ========================================================
   /*A a1;
   A *ptr=&a1;
    ptr->fun1();
    ptr->fun2();
    ptr->fun3();
    ptr->fun4();
    // ptr->fun4(5);
    */
    return 0;
}