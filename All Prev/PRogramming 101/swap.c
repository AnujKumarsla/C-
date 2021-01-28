#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;
    printf("Enter a value in a : ");
    scanf("%d",&a);
    printf("Enter a value in b : ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("The value of a is %d and the value in b is %d",a,b);
    getch();
    return 0;
}