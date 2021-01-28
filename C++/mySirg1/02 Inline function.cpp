#include<iostream>
using namespace std;

inline int sum(int, int);
int main(){
    cout<<"The sum of 4 and 6 is "<<sum(4,6); 
    return 0;
}
int sum(int a, int b){
    return a+b;
}