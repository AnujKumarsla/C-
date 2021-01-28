// Dynamic Memory Allocation
#include<iostream>
using namespace std;
// New and Delete Keyword

int main(){
    int *ptr, a,*p;
    cout<<"Enter the no. : ";
    cin>>a;
    ptr=new int[a];
    p=ptr;
    for(int i=0;i<a;i++){
        cout<<"Enter the value "<<i<<" :"<<endl;
        cin>>*p;
        p++;
    }
    cout<<"\nbreak\n";
    p=ptr;
    for(int i=0;i<a;i++){
        cout<<"value "<<i<<" : "<<*p<<endl;
        p++;
    }

    return 0;
}