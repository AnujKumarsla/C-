// Call by reference
#include<iostream>

using namespace std;
int sum(int &a, int &b){
    cout << "value of a "<< a<< " b "<< b;
    a=15;
    b=25;
    cout << "\nvalue of a "<< a<< " b "<< b;
    return a+b;
}
int main(){
    int x=7,y=6;
    cout << "\nvalue of x "<< x<< " y "<< y;
    cout<< "\nSum "<<sum(x,y);
    cout << "\nvalue of x "<< x<< " y "<< y<<endl;
    return 0;
}