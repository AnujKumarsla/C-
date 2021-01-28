#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf("Enter the two number in a and b : ");
    scanf("%d %d",&a ,&b);
    printf("The value of a is %d and b is %d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a is %d and b is %d",a,b);
    getch();
    return 0;
}