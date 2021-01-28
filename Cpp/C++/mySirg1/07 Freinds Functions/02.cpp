#include<iostream>
using namespace std;

class Complex{
    int r,i;
    public :
    Complex(int a=0,int b=0){
        r=a;i=b;
    }
    friend ostream& operator<<(ostream& , Complex);
    friend istream& operator>>(istream& , Complex&);
};

istream& operator>>(istream &din, Complex &c){
    cin>>c.r>>c.i;
    return din;
}
ostream& operator<<(ostream &dout, Complex c){
    cout<<"The values are : "<<c.r<<"+"<<c.i<<endl;
    return dout;
}
int main(){
    Complex c, d;
    cout<<c<<d;
    cin>>c>>d;
    cout<<c<<d;
    return 0;
}