#include <stdio.h>
#include<conio.h>
int main()
{
    int a[10],sum=0,avg;
    clrscr();
    for(int i=0;i<10;i++)
    {
        printf("Enter the %d value : ",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/10.0;
    printf("The avg value of the entered value  is : %d",avg);
    
    getch();
    return 0;
}