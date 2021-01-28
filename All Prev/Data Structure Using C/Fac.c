#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int fac(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("%d is factorial of %d",fac(n),n);
    return 0;
}

int fac(int n)
{
    int x;
    if(n==1)
        return n;
    x=n*fac(n-1);
    return x;
}