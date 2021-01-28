// structure with member variables and function
#include<iostream>

using namespace std;

struct book{
    int bid;
    float price;
    char title[20];

    void input(){
        cout<<"Enter the Name, id , price ";
        cin>>title>>bid>>price;
    }

    void show(void){
        cout<<"Book : \nName : "<<title<<"\nPrice : "<<price<<"\nId : "<<bid<<endl;
    }
};

int main(){
    book b;
    b.input();
    b.show();
    return 0;
}