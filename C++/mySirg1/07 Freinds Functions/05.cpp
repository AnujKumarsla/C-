// unary operator as a friend function;
#include<iostream>
using namespace std;

class Complex{
    int r, i;
    public:
    Complex(int a=0, int b=0){
        r=a;
        i=b;
    }
    void show(){
        cout<<r<<"+"<<i<<"i"<<endl;
    }
    friend Complex operator-(Complex);
};
Complex operator-(Complex c1){
    Complex c2;
    c2.r=-c1.r;
    c2.i=-c1.i;
    return c2;
}
int main(){

    Complex c1(4,6);
    Complex c2=-c1;
    c1.show();
    c2.show();
    return 0;
}