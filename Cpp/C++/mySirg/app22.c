#include<iostream>
// shor hand operator works 
// but unary increament and decrement not works
using namespace std;


class Complex{
    int i, r;
    public :
        Complex(int a, int b){
            i=a;r=b;
        }
        Complex(int a){
            i=a;
        }
        Complex(void){
            cout<<"It's a void constructor.\n";
            i=0;r=0;
        }

        Complex operator-(void){
            Complex temp;
            temp.i=-i;
            temp.r=-r;
            return temp;
        }
//      Pre Increament operator 
        Complex operator++(void){
            i=++i;
            r=++r;
            cout<<"Pre ++ is run.\n";
        }
//      Post Increament operator 
        Complex operator++(int){
            i=++i;
            r=++r;
            cout<<"Post ++ is run.\n";
        }
        Complex operator+(Complex a){
            Complex temp;
            temp.i=i+a.i;
            temp.r=r+a.r;
            return temp;
        }
        void operator+=(Complex a){
            i=i+a.i;
            r=r+a.r;
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
    Complex a(6,3), b(6,0), c(3,5), d;
    a.show();
    b.show();
    ++a;
    a.show();
    b++;
    b.show();
    return 0;
}