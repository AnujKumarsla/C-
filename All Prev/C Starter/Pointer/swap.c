#include<stdio.h>
#include<conio.h>

void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("The value of a is %d and b is %d",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}