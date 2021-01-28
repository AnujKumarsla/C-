#include<iostream>
using namespace std;

class Complex{
    int r,i;
    public:
    Complex(int a=0,int b=0){
        r=a;
        i=b;
    }
    friend ostream& operator<<(ostream& , Complex);
    friend istream& operator>>(istream& , Complex&);
    // Complex operator+(Complex c1, Complex c2){
    Complex operator+(Complex c2){
        Complex c3;
        c3.r=r+c2.r;
        c3.i=i+c2.i;
        return c3;
    }

};

istream& operator>>(istream &din, Complex &c){
    cin>>c.r>>c.i;
    return din;
}
ostream& operator<<(ostream &dout, Complex c){
    cout<<"The values are : "<<c.r<<"+"<<c.i<<"i"<<endl;
    return dout;
}
int main(){
    Complex c1,c2,c3;
    cin>>c1>>c2;
    c3=c1+c2;
    cout<<c3;
    return 0;
}