//PollyMorphism: Function Overloading
#include<iostream>
using namespace std;

int area(int l, int b){
    cout<<"Rectangle\n";
    return (l*b);
}
float area(float r){
    cout<<"Circle\n";
    return (3.14*r*r);
} 
int area(int a){
    cout<<"Square\n";
    return a*a;
}
int main(){
    int a,l,b;
    float r;
    cout<<"Enter the side of Square : ";
    cin>>a;
    cout<<"The area is : "<<area(a)<<"\n";
    
    cout<<"Enter the sides of Rectangle : ";
    cin>>l>>b;
    cout<<"The area is : "<<area(l,b)<<"\n";

    cout<<"Enter the radius of Circle : ";
    cin>>r;
    cout<<"The area is : "<<area(r)<<"\n";
    return 0;
}