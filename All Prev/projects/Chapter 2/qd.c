#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x,y,r,phi;
    printf("Enter the Cartisian co-ordinate as (x,y) : ");
    scanf("%d,%d",&x,&y);
    r=sqrt(pow(x,2)+pow(y,2));
    phi=tanh(y/x);
    printf("The Polar Co-ordinate is : (%d,%d)",r,phi);
    getch();
    return 0;
}