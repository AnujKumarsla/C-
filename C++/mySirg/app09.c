// Function overloading
#include<iostream>

using namespace std;

int area(int l, int b);
float area(int);

int main(){
    int r=4,l=5,b=6;
    // cout <<"Enter the length, breadth , and radius ";
    // cin>>l>>b>>r;
    cout<<" The area of the rectangle "<< area(l,b);
    cout<<"\nThe are of the Circle "<<area(r);
    return 0;
}
int area(int a, int b){
    return a*b;
}
float area(int a){
    return 3.14*a*a;
}