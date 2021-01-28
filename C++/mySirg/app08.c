// Default Arguements
#include<iostream>

using namespace std;

int add(int , int=0 , int=0 , int=0);

int main(){
    int p=3,q=4,r=2,s=8;
    cout << "\nThe sum of pq "<< add(p,q);
    cout << "\nThe sum of pqr "<< add(p,q,r);
    cout << "\nThe sum of pqrs "<< add(p,q,r,s);

    return 0;
}
int add(int a, int b, int c, int d){
    return a+b+c+d;
}