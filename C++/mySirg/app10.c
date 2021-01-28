// Using Structures
#include<iostream>

using namespace std;

struct book{
    int bid;
    char title[20];
    float price;
};

int main(){
    book b1;
    cout<<"Enter the value of the book \nBookId, Name, Price ";
    cin>>b1.bid>>b1.title>>b1.price;
    cout<<"Book\nName : "<<b1.title<<"\nBook Id : "<<b1.bid<<"\nPrice : "<<b1.price;

    return 0;
}