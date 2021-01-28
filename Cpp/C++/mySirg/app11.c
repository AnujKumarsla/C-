// copying structure
#include<iostream>
#include<conio.h>

using namespace std;

struct book{
    int bid;
    char title[20];
    float price;
};
int main(){
    book b;
    cout<<"Enter the Name, id, price : ";
    cin>>b.title>>b.bid >> b.price;
    book b2;
    b2=b;
    cout<<"Book\nName : "<<b2.title<<"\nBid : "<<b2.bid<<"\nPrice : "<<b2.price;
    getch();

    return 0;
}