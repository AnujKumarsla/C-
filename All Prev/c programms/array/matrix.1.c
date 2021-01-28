#include <stdio.h>
#include <conio.h>

int main()
{
    int a[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}};
    int b[3][2] = {
        {6, 5},
        {4, 3},
        {2, 1}

    };
    {
        printf("Enter the order of the matrix : ");
        scanf("%d %d",&rm1,&cm1);
        printf("Enter the order of the matrix : ");
        scanf("%d %d",&rm2,&cm2);

        if(cm1==rm2)
        {
            comm=cm1;

        }
        else
        {
            printf("Sorry, the order of the matrix is mismatch!");
        }
        
    }
    int result[4][2],val;
    int rM1 = 4, cM2 = 2, comm = 3, temp;
    int r, c, x, sum;
    printf("Enter the matrix of %d X %d\n",rM1,comm);
    for(int i=0;i<rM1;i++)
    {
        for(int p=0;p<comm;p++)
        {
            fflush(stdin);
            scanf("%d",&val);
            a[i][p]=val;
        }
    }
    printf("Enter the matrix of %d X %d\n",comm,cM2);
    for(int i=0;i<comm;i++)
    {
        for(int p=0;p<cM2;p++)
        {
            fflush(stdin);
            scanf("%d",&val);
            a[i][p]=val;
        }
    }
    for (r = 0; r < rM1; r++)
    {
        for (c = 0; c < cM2; c++)
        {
            sum = 0;
            for (x = 0; x < comm; x++)
            {
                sum += a[r][x] * b[x][c];
                printf("%d X %d + ", a[r][x], b[x][c]);
            }
            printf("\b\b= %d\t", sum);
            result[r][c] = sum;
        }
        printf("\n");
    }
    printf("=====================================================================\n");
    for (r = 0; r < rM1; r++)
    {
        printf("|  ");
        for (c = 0; c < cM2; c++)
        {
            printf("%d\t", result[r][c]);
        }
        printf("\b\b\b\b|");
        printf("\n");
    }
    return 0;
}