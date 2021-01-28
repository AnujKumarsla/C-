// Class Templates
#include<iostream>
using namespace std;

template <class X>
class ArrayList{
    struct ControlBox{
        int Capacity;
        X *arr_ptr;
    };
    ControlBox *c;
    public:
    ArrayList(int size){
        c=new ControlBox;
        c->Capacity=size;
        c->arr_ptr= new X[size];
    }
    void Add(int index, X value){
        if(index>=0 && index<c->Capacity){
            c->arr_ptr[index]=value;
        }
        else
            cout<<"Sorry! invalid index\n";
    }
    void view(int index,X &data){
        if(index>=0 && index<c->Capacity)
            data=c->arr_ptr[index];
        else
            cout<<"!invalid index\n";
    }
    void viewList(){
        int size=c->Capacity;
        X *ptr=c->arr_ptr;
        for(int i=0;i<size;i++)
            cout<<"value at "<<i<<" "<<ptr[i]<<endl;
        
    }
};
int main(){
    ArrayList <float>l=4;
    l.Add(0,5.4);
    l.Add(1,6.5);
    l.Add(2,3.8);
    l.Add(3,9.5);
    l.viewList();

    return 0;
}