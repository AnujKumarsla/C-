#include<iostream>
using namespace std;

//Default arguments 
int sum(int , int=0, int=0);
int main(){
    int a,b,c;
    cout<<"Enter the values in a, b and c\n";
    cin>>a>>b>>c;
    cout<<"The sum is : "<<sum(a,b,c);
    
    cout<<"\nEnter the values in a and b\n";
    cin>>a>>b;
    cout<<"The sum is : "<<sum(a,b);
    
    cout<<"\nEnter the values in a\n";
    cin>>a;
    cout<<"The sum is : "<<sum(a);

    return 0;
}
int sum(int a, int b, int c){
    return c+a+b;
}