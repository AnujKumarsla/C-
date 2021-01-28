// Inline function
#include <iostream>

using namespace std;

inline void fun();

int main(){
    cout << "Your are in the main\n";
    fun();
    return 0;
}
void fun(){
    cout<<"You are in the fun\n";
}