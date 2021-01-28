#include <stdio.h>
#include <conio.h>

void main()
{
    int num,rv=0;
    printf("Enter the number : ");
    scanf("%d",&num);

    while (num>0)
    {
        rv = (num%10)+(rv*10);
        num/=10;
    }
    printf("the reverse of the given number is : %d\n",rv);
}