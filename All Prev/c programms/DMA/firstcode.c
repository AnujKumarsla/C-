#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
/*
    int *a;
    a=(int *) malloc(4);
    printf("Enter a number : ");
    scanf("%d",a);
    printf("%d",*a);
    printf("\nDMA ends.");
*/
void take(int a[],int s)
{
    for(int i=0;i<s;i++)
        scanf("%d",&a[i]);
}        
void display(int a[],int s)
{
    for(int i=0;i<s;i++)
        printf("%d\t",a[i]);
}
int main()
{
    int *a;
    a=(int *)calloc(10,4);
    take(a,10);
    display(a,10);
    return 0;
}
