/*
Given a series: 1+(1+2) +(1+2+3) +(1+2+3+4) +…. +(1+2+3+…+n),
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    long int num,sum=0,total=0;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        sum+=i;
        total+=sum;
    }
    printf("The sum of total terms is %ld",total);
    return 0;
}