#include<stdio.h>
#include<conio.h>

void prime(int );

int main()
{
    int a;
    printf("Enter the value in a :  ");
    scanf("%d",&a);
    prime(a);
    return 0;
}
void prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {    printf("given number is not a prime number.\nDivisible by %d",i);
              return ;
        }
        
    }
    printf("given number is a prime number");
}