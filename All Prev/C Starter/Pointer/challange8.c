#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    printf("Enter the no. : ");
    scanf("%d",&a);
    printf("The Table of given no. is :\n");
    for(int i=1;i<11;i++)
        printf("%d X %d = %d\n",a,i,a*i);
}