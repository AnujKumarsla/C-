#include <stdio.h>
#include <conio.h>

int power(int,int);

int main()
{
    int a,b,c;
    printf("Enter the value in a  and b : ");
    scanf("%d %d",&a,&b);
    c=power(a,b);
    printf("The value of %d raise to the power of %d is %d",a,b,c);
    return 0;
}
int power(int a,int b)
{
    int total;
    if(b==1)
        return a;
    else
    {
        total= a*power(a,b-1);
        return total;
    }
    
}