// Call by address
#include<iostream>

using namespace std;

int sum(int *, int *);

int main(){
    int x=6,y=7;
    cout << "the value of x "<<x<< " and y "<< y<< endl;
    cout << "the sum is "<< sum(&x,&y)<< endl;
    cout << "the value of x "<<x<< " and y "<< y<< endl;
    return 0;
}
int sum(int *a, int *b){
    cout << *a << " "<< *b << endl;
    *a=5;
    *b=9;
    cout << *a << " "<< *b << endl;
    return *a+*b;
}