/*
C program to find the sum of series 1.2/3 + 2.3/4 + 3.4/5 + 4.5/6 + ... + n(n +1)/(n+2). 
*/
#include <stdio.h>
#include <conio.h>
//n.n+1/n+2
int main()
{
    long int num;
    float sum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) 
    {
        sum += ((float) i + ((float) i + 1) / 10) / ((float) i + 2);
    }
    printf("The sum of total terms is %f", sum);
    return 0;
}