// Template Functions
#include<iostream>
using namespace std;

template <class X>
X add(X a,X b){
    return a+b;
}
int main(){
    int x=8,y=45;
    cout<<add(x,y)<<endl;
    float a=4.65, b=45.36;
    cout<<add(a,b);
    return 0;
}