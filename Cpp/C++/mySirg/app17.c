// Contructor function : instance public member function
// can never be a static memeber funcion

/*
1. contructor :
        paramatrized constructor
        default constructors
        consturctor overloading
*/
#include<iostream>

using namespace std;

class Complex{
    int i, r;

    public : 
        Complex(){
            cout<<"Hello, Complex function.\n";
            r=0;i=0;
        }
        Complex(int a,int b){
            r=a;i=b;
        }
        Complex(int a){
            r=a;i=0;
        }
        void show(void){
            if(r!=0 && i!=0)
                cout<<r<<"+"<<i<<"i\n";
            else if(r!=0)
                cout<<r<<endl;
            else
                cout<<"0\n";
            
        }
};
int main(){
    Complex c1(3,6),c2(2),c3,    c4=Complex(3,6),c5=2;
    c1.show();
    c2.show();
    c3.show();
    c4.show();
    c5.show();
    return 0;
}