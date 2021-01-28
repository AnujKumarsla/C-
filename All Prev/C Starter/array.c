#include <stdio.h>
#include<conio.h>
int main()
{
    int a[10],i=0,sum=0,avg;
    for(i=0;i<10;i++)
    {
        printf("Enter the value in a[%d] : ",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=sum/10.0;
    printf("the average of the above numbers is : %d",avg);
    getch();
    return 0;
}