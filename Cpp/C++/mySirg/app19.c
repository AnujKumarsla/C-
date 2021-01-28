#include<iostream>

using namespace std;

class Complex{
    int i,r;
    public :
        Complex(void){
            cout<<"Const. is called.\n";
        }
        ~Complex(){
            cout<<"destruct. is called.\n";
        }
};

void call(){
    Complex c;
    cout<<"Hello, Call.\n";
}
int main(){
    call();
    return 0;
}