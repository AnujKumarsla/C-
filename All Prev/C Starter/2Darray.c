#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][3],b[2][3],c[2][3],row,col;
    // clrscr();
    for(row=0;row<2;row++)
    {
        for(col=0;col<=2;col++)
        {
            printf("Enter the value in a[%d][%d] : ",row,col);
            scanf("%d",&a[row][col]);
        }
    }

    for(row=0;row<2;row++)
    {
        for(col=0;col<=2;col++)
        {
            printf("Enter the value in b[%d][%d] : ",row,col);
            scanf("%d",&b[row][col]);
        }
    }

    
    for(row=0;row<2;row++)
    {
        for(col=0;col<=2;col++)
        {
            c[row][col]=a[row][col]+b[row][col];
            printf("%d\t",c[row][col]);
        }
        printf("\n");
    }


    getch();
    return 0;
}