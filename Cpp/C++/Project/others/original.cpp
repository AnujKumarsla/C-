#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void take(int *a,int r,int c);
void out(int *a,int r,int c);    
int compare(void);
    int p=0,q=0,s=0,t=0;
    int A[3][3];
    int B[3][3],temp[3][3][3];
void swap(int *,int *);
void print(void);
int main()
{
    take(A[0],3,3);

    take(B[0],3,3);
    compare();
    // while (compare())
    {
        printf("\n");
        print();
        for(int r=0;r<3;r++)
        {
            for(int c=0;c<3;c++)
            {
                if(temp[r][c][1]!=0 || temp[r][c][2]!=0)
                {
                    if(c<2)
                    {
                    //right
                    if(B[r][c]+B[r][c+1]==2 || B[r][c]+B[r][c+1]==3 || B[r][c]+B[r][c+1]==5 || B[r][c]+B[r][c+1]==7 || B[r][c]+B[r][c+1]==11
                    || B[r][c]+B[r][c+1]==13 || B[r][c]+B[r][c+1]==17)
                    printf("replace %d with %d\n",temp[r][c][0],temp[r][c+1][0]);
                    // swap(&B[r][c],&B[r][c+1]);
                    // compare();out(B[0],3,3);
                    }

                    if(c>0)
                    {
                    //left
                    if(B[r][c]+B[r][c-1]==2 || B[r][c]+B[r][c-1]==3 || B[r][c]+B[r][c-1]==5 || B[r][c]+B[r][c-1]==7 || B[r][c]+B[r][c-1]==11
                    || B[r][c]+B[r][c-1]==13 || B[r][c]+B[r][c-1]==17)
                    printf("replace %d with %d\n",temp[r][c][0],temp[r][c-1][0]);
                    // swap(&B[r][c],&B[r][c-1]);
                    // compare();out(B[0],3,3);
                    }

                    if(r<2)
                    {
                    //down
                    if(B[r][c]+B[r+1][c]==2 || B[r][c]+B[r+1][c]==3 || B[r][c]+B[r+1][c]==5 || B[r][c]+B[r+1][c]==7 || B[r][c]+B[r+1][c]==11
                    || B[r][c]+B[r+1][c]==13 || B[r][c]+B[r+1][c]==17)
                    printf("replace %d with %d\n",temp[r][c][0],temp[r+1][c][0]);
                    // swap(&B[r][c],&B[r+1][c]);
                    // compare();out(B[0],3,3);

                    }

                    if(r>0)
                    {
                    //top
                    if(B[r][c]+B[r-1][c]==2 || B[r][c]+B[r-1][c]==3 || B[r][c]+B[r-1][c]==5 || B[r][c]+B[r-1][c]==7 || B[r][c]+B[r-1][c]==11
                    || B[r][c]+B[r-1][c]==13 || B[r][c]+B[r-1][c]==17)
                    printf("replace %d with %d\n",temp[r][c][0],temp[r-1][c][0]);
                    // swap(&B[r][c],&B[r-1][c]);
                    // compare();out(B[0],3,3);

                    }
                }
            }
        }
        out(B[0],3,3);

    }
    
    return 0;
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
int compare()
{
    for(int R=0;R<3;R++)
    {
        for(int C=0;C<3;C++)
        {
            int x=A[R][C];
            int y=0;
            // printf("\nx=%d and y=%d   %d,%d",x,y,R,C);
            for(int r=0;r<3;r++)
            {
                for(int c=0;c<3;c++)
                {
                    y=B[r][c];
                    // printf("\ny= %d  %d,%d",y,r,c);
                    if(x==y)
                    {
                        temp[r][c][0]=y;
                        temp[r][c][1]=r-R;
                        temp[r][c][2]=c-C;
                        break;
                    }
                }
                if(x==y)
                    break;
            }
        }
    }
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            if(temp[r][c][1] || temp[r][c][2])
            {
                printf("\nwork is not done\n");
                return 1;
            }
            else
                return 0;
        }
    }
}
void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
 
   *b=c;
}
void print()
{
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
}