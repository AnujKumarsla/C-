#include <stdio.h>
#include <conio.h>

void main()
{
    int num,total=1;
    printf("Enter the number : ");
    scanf("%d",&num);

    while (num>1)
    {
        total *= num;
        num --;
    }
    printf("The factorial of the give number is : %d\n",total);
    
}