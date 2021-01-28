#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the length : ");
    scanf("%d",&a);
    for(int i=0;i<a+1;i++)
        printf("%d\n",i);
    return 0;
}