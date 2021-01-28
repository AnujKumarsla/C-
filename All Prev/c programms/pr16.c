/* C program to find the sum of Natural Number/Factorial of Number of all natural numbers from 1 to N.
Series: 1/1! + 2/2! + 3/3! + 4/4! + ... N/N!

This program will find the sum of Natural 
Number/Factorial of Number of all natural numbers from 1 to N.
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int num;
    float sum,fac;
    printf("Enter the number : ");
    scanf("%d",&num);

    fac=1;sum=0;

    for(int i=1;i<=num;i++)
    {
        fac=fac*i;
        sum = sum + (i/fac);
    }

    printf("The output is %f",sum);
    return 0;
}