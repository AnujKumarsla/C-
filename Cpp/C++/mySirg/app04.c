// Call by value
#include<iostream>
#include<string>

using namespace std;

int sum(int , int );

int main(){
    int x=3,y=6;
    cout << "The sum is "<< sum(x,y);
    return 0;
}
int sum(int a, int b){
    return a+b;
}