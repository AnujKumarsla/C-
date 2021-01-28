/*C program to find the sum of series 1^2/1! + 2^2/2! + 3^2/3! + 4^2/4! + ... n^2/n!.*/
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
        total+=i*i/sum;
    }
    printf("The sum of total terms is %ld",total);
    return 0;
}