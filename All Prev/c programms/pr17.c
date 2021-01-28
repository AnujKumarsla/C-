/*  
C program to find sum of following series
 1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num,i;
    float sum=0;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum=sum+(1.0/i);
    }
    printf("Sum of the series is: %f",sum);
    return 0;
}