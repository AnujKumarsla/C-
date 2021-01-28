#include<stdio.h>
#include<conio.h>
int main()
{
    int cp,sp;
    printf("Enter the Cost Price : ");
    scanf("%d",&cp);
    printf("Enter the Selling Price : ");
    scanf("%d",&sp);
    if (cp-sp>0)
        printf("You are in loss");
    else if (cp-sp<0)
        printf("You are in Profit");
    else
        printf("You are neither in loss nor in Profit");
    getch();
    
}