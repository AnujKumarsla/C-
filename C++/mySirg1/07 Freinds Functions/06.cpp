// Member function of a class becomes friend function of another class

#include<iostream>
using namespace std;
class B;

class A{
    int a;
    public:
    void setValue(int x){
        a=x;
    }
    void fun(B obj);
    void foo(){
        cout<<"Hello, i'm fromm class A foo\n";
    }
};

class B{
    int b;
    public:
    void setValue(int y){
        b=y;
    }
    friend void A::fun(B obj);
};

void A::fun(B obj){
    cout<<"Hello, i'm from class A fun() \n";
    cout<<"The value in A : "<<a<<endl;
    cout<<"The value in B : "<<obj.b<<endl;
}

int main(){
    A a1;
    B b1;
    a1.setValue(5);
    b1.setValue(8);
    a1.fun(b1);
    // b1.foo();
    return 0;
}