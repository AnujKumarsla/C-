#include <stdio.h>
#include <conio.h>

struct book
{
    char name[20];
    float price;
    char pubDate[15];

};
struct book input(void);

void display(struct book);
int main()
{
    struct book b1;
    b1=input();
    display(b1);
    return 0;

}
struct book input(void)
{
    struct book b1;
    printf("Enter the book name :");
    gets(b1.name);
    printf("Enter the book price :");
    scanf("%f",&b1.price);
    printf("Enter the book publication date :");
    fflush(stdin);
    gets(b1.pubDate);

    return b1;
}
void display(struct book b)
{
    printf("Book : %s\tPrice : %0.2f\tPublication Date : %s\n",b.name,b.price,b.pubDate);
}