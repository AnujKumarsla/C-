#include <stdio.h>
#include <conio.h>

int fac(int);
 
 int main()
 {
     int a,b;
     printf("Enter the value in a : ");
     scanf("%d",&a);
     b=fac(a);
     printf("The factorial of %d is %d",a,b);
     return 0;
 }
 
 int fac(int a)
 {
     int total;
     if( a==1)
        return a;
    else
    {
        total=a*fac(a-1);
        return total;
    }
    
 }