// constructor :
//     default,
//     copy;

#include<iostream>

using namespace std;

class Complex{
    int i=-4,r=-4;

    public:
        Complex(int a, int b){
            i=a;r=b;
            show();
        }
        Complex(int a){
            i=a;
            r=0;
            show();
        }
        Complex(void){
            cout<<"You are inside default.\t";
            show();
        }
        Complex(Complex &c){
            cout<<"You are inside Copy.\t";
            i=c.i;
            r=c.r;
            show();
        }
        void show(void){
            if(i>0){
                if(r==0)
                    cout<<i<<"i"<<endl;
                else
                    cout<<r<<"+"<<i<<"i"<<endl;
            }
            else if(i<0){
                if(r==0)
                    cout<<i<<"i"<<endl;
                else
                    cout<<r<<i<<"i"<<endl;
            }
            else{
                if(r==0)
                    cout<<"0"<<endl;
                else
                    cout<<r<<endl;
            }
        }
};

int main(){
    Complex c1(0,6), c2(6), c3;
    Complex c4=c1;
    c3=c2;
    c3.show();
    // c.show();
    return 0;
}