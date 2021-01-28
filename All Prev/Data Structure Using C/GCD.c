#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
int GCD(int a,int b);
int main()
{
    int a,b;
    int c=23%45;
    printf("Enter the numbers : ");
    scanf("%d %d",&a,&b);
    printf("The Greatest Common Divisor if %d\n",GCD(a,b));
    printf("The Greatest Common Divisor if %d\n",gcd(a,b));
    printf("The Greatest Common Divisor if %d\n",c);
    return 0;
}

int GCD(int a,int b)
{
    if(a==b)
        return a;
    if(a<b)
    {
        if(b%a==0)
            return a;
        return GCD(b%a,a);
    }
    else
    {
        if(a%b==0)
            return b;
        return GCD(a%b,b);
    }
    
}