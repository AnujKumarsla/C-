#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value in a : ");
    scanf("%d",&a);
    printf("Enter the value in b : ");
    scanf("%d",&b);
    printf("\nCurrent value of a is %d and b is %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nNow the value of a is %d and b is %d",a,b);
    getch();
    return 0;
}