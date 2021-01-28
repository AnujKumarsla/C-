// access specifiers private, protected, public
#include<iostream>

using namespace std;

struct book{
    private :

        int bid;
        char title[20];
        float price ;
    public :
        void input(void){
            cout<<"Enter the book name, id , price : ";
            cin>>title>>bid>>price;
            if(bid<0)
                bid=-bid;
        }
        void display(void){
            cout<<"Book : \nName : "<<title<<"\nBook Id : "<<bid<<"\nPrice : "<<price;

        }

};
int main(){
    book b;
    b.input();
    cout<<"The book "<< b.title;
    b.display();
    return 0;
}