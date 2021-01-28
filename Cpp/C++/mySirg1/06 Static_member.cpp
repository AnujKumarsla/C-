#include<iostream>
using namespace std;

class Int{
    int a;
    static int data;
    public :
        Int(int x=0){
            a=x;
        }
        static void show(void);
        // static void show(void){
        //     cout<<"The value : "<<data;
        // }
};

int Int::data=14;
void Int::show(void){
        cout<<"The value : "<<data;
    }

int main(){
    Int::show();
    return 0;
}