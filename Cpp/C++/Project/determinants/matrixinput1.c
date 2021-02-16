#include <stdio.h>
#include <conio.h>
void take(int *a,int r,int c);
void out(int *a,int r,int c);
int main()
{
    int a[4][2];
    take(&a[0][0],4,2);
    out(&a[0][0],4,2);
    return 0;
}
// ==================================================================
void take(int *a,int r,int c)
{
    printf("Enter the matrix of %d X %d : \n",r,c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",(a++));
        }
    }
}
// ==================================================================
void out(int *a,int r,int c)
{
    printf("Resultant matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",*(a++));
        }
        printf("\n");
    }
}