#include<iostream>
#include<string>
// program for Reference variable 

using namespace std;

int main(){
    int a=1;
    int &r=a;
    r++;
    cout<< r << " " << a << endl;
    a++;
    cout << r << " " << a << endl;

    cout<< "Hello ,world!";
}