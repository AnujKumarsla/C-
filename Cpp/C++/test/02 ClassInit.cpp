#include<iostream>
#include<conio.h>

using namespace std;

class test{
    int &x;
    public:
        test(int a):x(a){
            cout<<"Hello, world!";
        }
        void show(){
            cout<<"Value is : "<<x<<endl;
        }
};
int main(){
    test t(5);
    t.show();
    return 0;
}