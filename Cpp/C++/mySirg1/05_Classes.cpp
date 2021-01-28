// Classes 
#include<iostream>
using namespace std;

class Complex{
    int i,r;
    public:
    // Complex(Complex &c){
    //     i=c.i;
    //     r=c.r;
    // }

    Complex(int a=0, int b=0){
        r=a;
        i=b;
    }
    // =================
    ~Complex(){
        // Destructor
        cout<<"Complex is now ended\n";
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.i=i+c.i;
        temp.r=r+c.r;
        return temp;
    }
    Complex operator-(Complex c){
        Complex temp;
        temp.i=i-c.i;
        temp.r=r-c.r;
        return temp;
    }
    // Operator overloading
    Complex operator-(){
        Complex temp;
        temp.i=-i;
        temp.r=-r;
        return temp;
    }
    // Post increament operator 
    Complex operator--(){
        Complex c;
        c.i=--i;
        c.r=--r;
        return c;
    }
    Complex operator--(int){
        Complex c;
        c.i=i--;
        c.r=r--;
        return c;
    }
    void show(){
        if(i>0){
            if(r>0){
                cout<<r<<"+"<<i<<"i\n";
            }
            else if(r<0){
                cout<<r<<"+"<<i<<"i\n";
            }
            else{
                cout<<i<<"i\n";
            }
        }
        else if(i<0){
            if(r>0){
                cout<<r<<i<<"i\n";
            }
            else if(r<0){
                cout<<r<<i<<"i\n";
            }
            else{
                cout<<i<<"i\n";
            }
        }
        else{
            if(r>0){
                cout<<r<<"\n";
            }
            else if(r<0){
                cout<<r<<"\n";
            }
            else{
                cout<<"0\n";
            }
        }
    }
};
void fun(){
    Complex c;

}
int main(){
    Complex c1(5,6), c2=Complex(7,8), c3;
    // c1.show();
    // c2.show();
    // ====================
    // c3.show();
    // c3=c1+c2;
    // c3.show();
    // ==============
    // c1=c1+c2;
    // c2=c1-c2;
    // c1=c1-c2;
    // c1.show();
    // c2.show();
    // ==============
    // c3=-c2;
    // fun();
    // c3.show();
    // ==============================
    // c1.show();

    // c3=c1--;
    // c3.show();
    // c1.show();

    // c3=--c1;
    // c3.show();
    // c1.show();
    // ================
    Complex c=Complex(c1);
    c.show();
    return 0;
}