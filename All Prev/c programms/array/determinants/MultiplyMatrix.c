#include <stdio.h>
#include <conio.h>

int main()
{
    int result[4][2],a[4][3],b[3][2];
    int rM1,cM1,rM2,cM2,comm;
    int val,r, c, x, sum,temp;
    printf("Enter the order of the matrix A : ");
    scanf("%d %d",&rM1,&cM1);
    printf("Enter the order of the matrix B : ");
    scanf("%d %d",&rM2,&cM2);

    if(cM1==rM2)
    {
        comm=cM1;
        
        printf("Enter the matrix of %d X %d\n",rM1,comm);
        for(int i=0;i<rM1;i++)
        {
            for(int p=0;p<comm;p++)
            {
                scanf("%d",&val);
                a[i][p]=val;
            }
        }
        printf("Enter the matrix of %d X %d\n",comm,cM2);
        for(int i=0;i<comm;i++)
        {
            for(int p=0;p<cM2;p++)
            {
                scanf("%d",&val);
                b[i][p]=val;
            }
        }
        for (int r = 0; r < rM1; r++)
        {
            for (int c=0; c < cM2; c++)
            {
                sum = 0;
                for (int x = 0; x < comm; x++)
                {
                    sum += a[r][x] * b[x][c];
                    // printf("%d X %d + ", a[r][x], b[x][c]);
                }
                // printf("\b\b= %d\t", sum);
                result[r][c] = sum;
            }
            // printf("\n");
        }
        printf("=====================================================================\n");
        for (r = 0; r < rM1; r++)
        {
            for (c = 0; c < cM2; c++)
            {
                printf("%d\t", result[r][c]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Sorry, the order of the matrix is mismatch!");
    }
    
    return 0;
}