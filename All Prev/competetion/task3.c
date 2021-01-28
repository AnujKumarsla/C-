// In this challenge, you have to input a five digit number and print the sum of digits of the number.
#include<stdio.h>
int main()
{
    int num,sum=0,a;
    scanf("%d",&num);
    do
    {
        a=num%10;
        num/=10;
        sum+=a;
    }
    while(num>0);

    printf("%d",sum);
    return 0;
}