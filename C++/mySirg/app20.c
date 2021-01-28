#include<iostream>

using namespace std;

class Complex{
    int i,r;
    public :
        Complex(int a, int b){
            i=a;
            r=b;
        }
        Complex(void){
            cout<<"void constructor.\n";
        }
        Complex add(Complex c){
            Complex temp;
            temp.i=i+c.i;
            temp.r=r+c.r;
            return temp;
        }

        Complex operator +(Complex c){
            Complex temp;
            temp.i=i+c.i;
            temp.r=r+c.r;
            return temp;
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

void call(){
    Complex c(5,6), d(2,6), b(6,2), x;
    x=c.add(d);
    c.show();
    d.show();
    x.show();
    b=x+c;
    b.show();
    cout<<"Hello, Call.\n";
}
int main(){
    call();
    return 0;
}