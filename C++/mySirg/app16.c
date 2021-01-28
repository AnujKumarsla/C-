// Static Keyword
#include<iostream>

using namespace std;

class Complex{
    int a,b;
    static char type;
    public:
        void show_data(void){
            cout<<a<<"+"<<b<<"i"<<endl;
        }
        void set_data(int x,int y){
            a=x;b=y;
        }
        static void is_type(void){
            cout<<"Type : "<<type<<endl;
        }
        static void set_type(char c){
            type=c;
        }
};
char Complex:: type='i';

int main(){
    Complex c;
    // c.set_data(4,5);
    // c.show_data();
    Complex::is_type();
    Complex::set_type('x');
    Complex::is_type();

    // cout<<Complex::type;
    return 0;
}