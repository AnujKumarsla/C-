#include<iostream>
using namespace std;
class B;

class A{
    int a;
    public:
    A(int x){
        a=x;
    }
    friend void show(A, B);
};

class B{
    int b;
    public:
    B(int y){
        b=y;
    }
    friend void show(A, B);
};

void show(A x, B y){
    cout<<"The value inside the A and B :"<<x.a<<y.b<<endl;
}
int main(){
    A a1(4);
    B b1(6);
    show(a1, b1);
    return 0;
}