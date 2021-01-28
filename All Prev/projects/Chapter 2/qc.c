#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,ar,s;
    printf("Enter the sides of the triangle : ");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    ar=sqrt( s*(s-a)*(s-b)*(s-c) );
    printf("Area of the given Triangle is : %d",ar);
    return 0;
}