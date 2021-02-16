#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void takein(int *,int,int);
void takeout(int *,int,int);void take(int *a,int r,int c);
void out(int *a,int r,int c);    
    
    int p=0,q=0,s=0,t=0;

int main()
{
    int A[3][3];
    int B[3][3],temp[3][3][3];
    take(A[0],3,3);
    out(A[0],3,3);

    takein(B[0],3,3);
    takeout(B[0],3,3);
    takeout(A[0],3,3);
    for(int R=0;R<3;R++)
    {
        for(int C=0;C<3;C++)
        {
            int x=A[R][C];
            int y=0;
            printf("\nx=%d and y=%d   %d,%d",x,y,R,C);
            for(int r=0;r<3;r++)
            {
                for(int c=0;c<3;c++)
                {
                    y=B[r][c];
                    printf("\ny= %d  %d,%d",y,r,c);
                    if(x==y)
                    {
                        temp[R][C][0]=x;
                        temp[R][C][1]=r-R;
                        temp[R][C][2]=c-C;
                        break;
                    }
                }
                if(x==y)
                    break;
                printf("test S%d",s++);
            }
        }
    }
    printf("\n");
    for(int r=0;r<3;r++)
    {

        for(int c=0;c<3;c++)
            printf("%d\t",temp[r][c][0]);
        printf("\n");
        for(int c=0;c<3;c++)
            printf("%d\t",temp[r][c][1]);
        printf("\n");
        for(int c=0;c<3;c++)
            printf("%d\t",temp[r][c][2]);
        printf("\n\n");
    }
    return 0;
}

void takein(int *a,int R,int C)
{
    printf("Enter the matrix :\n");
    for(int r=0;r<R;r++)
        for(int c=0;c<C;c++)
            scanf("%d",(a+(r*R*C)+c));
}

void takeout(int *a,int R,int C)
{
    printf("The output matrix : \n");
    for(int r=0;r<R;r++)
    {
        for(int c=0;c<C;c++)
            printf("%d\t",*(a+(r*R*C)+c));
        printf("\n");
    }
}

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