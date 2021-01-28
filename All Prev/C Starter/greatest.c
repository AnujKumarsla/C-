#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,sm,lg,esum=0,osum=0;
    //FOR TAKING INPUT  NUMBER FROM USERS
    for(i=0;i<10;i++)
    {
        printf("Enter the value in a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    //for FINDING SMALLEST NUMBER
    sm=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<sm)
            sm=a[i];
    }
    //for FINDING LARGEST NUMBER
    lg=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>lg)
            lg=a[i];
    }
    printf("\tThe smallest number is : %d\n",sm);
    printf("\tThe greatest number is : %d\n",lg);
    //FOR EVEN SUM
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            esum+=a[i];
        else
            osum+=a[i];
    }
    printf("\tThe even number sum is : %d\n",esum);
    printf("\tThe odd number sum is : %d\n",osum);
    getch();
    return 0;
}