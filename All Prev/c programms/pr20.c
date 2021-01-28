/*This program will print the sum of the square 
of all natural numbers from 1 to N.*/
#include <stdio.h>
#include <conio.h>

int main()
{
    long int num,i,sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum+=i*i;
    }
    printf("The sum of all terms is : %d",sum);
    return 0;
}