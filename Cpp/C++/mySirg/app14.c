// lecture -7 classes and objects in c++ part1

// class, structure
// private , public, protected
// member function decl, defin

#include <iostream>

using namespace std;
/*
struct Complex{
    private:
        int a, b;

    public:
        void set_data(int x, int y){
            a=x;
            b=y;
        }
        void show_data(void){
            cout<<"a = "<<a<<", and b = "<<b;
    }
};
*/

/*
class Complex{
    int a,b;
    public:
        void set_data(int x, int y){
            a=x;    b=y;
        }
        void show_data(){
            cout<<"Value of a = "<<a<<", and b = "<<b;
        }
};
*/

class Complex{
    int a,b;
    public:
        void set_data(int, int);
        void show_data(){
            cout<<"Value of a = "<<a<<", and b = "<<b;
        }
};

void Complex:: set_data(int x, int y){
    a=x; b=-y;
}
int main(){
    Complex c;
    c.set_data(4, 5);
    // c.a=78;
    // c.b=95;
    c.show_data();
    return 0;
}