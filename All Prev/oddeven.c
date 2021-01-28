#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a%2==0)
        printf("given number is even.");
    else
        printf("given number is odd.");
}