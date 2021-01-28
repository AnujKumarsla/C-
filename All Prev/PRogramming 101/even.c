#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b;
    printf("Enter the number in a :");
    scanf("%d",&a);
    if((a/2)*2==a)
    {
        printf("%d is Even",a);
    }
    else
    {
        printf("%d is Odd",a);
    }
    
    getch();
    return 0;
}