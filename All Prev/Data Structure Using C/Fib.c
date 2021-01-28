#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fib(int n);
int main()
{
    int n;
    printf("Enter the numbers : ");
    scanf("%d",&n);
    printf("%d term of the fibonacci series is %d",n,fib(n));
    return 0;
}

int fib(int n)
{
    int x;
    if(n<=2)
        return 1;
    x=fib(n-1)+fib(n-2);
    return x;
}