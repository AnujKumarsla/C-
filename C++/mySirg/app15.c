#include <iostream>

using namespace std;

class Complex{
        int a,b;
    public:
        void set_data(int x, int y){
            a=x; b=-y;
        }
        void show_data(){
            cout<<"Value of a = "<<a<<", and b = "<<b<<endl;
        }
        Complex add(Complex x){
            Complex c;
            c.a=a+x.a;
            c.b=b+x.b;

            return c;
        }
};
int main(){
    Complex c1, c2, c3;
    c1.set_data(4, 5);
    c1.show_data();
    c2.set_data(3, 7);
    c2.show_data();
    // c3=c3.add(c1, c2);
    c3=c1.add(c2);
    c3.show_data();
    // c.a=78;
    // c.b=95;
    return 0;
}