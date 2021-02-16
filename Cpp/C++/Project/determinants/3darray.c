#include <stdio.h>
#include <conio.h>

int main()
{
    int *p,A[4][4][2]={
        {
            {
                1,2
            },
            {
                3,4
            },
            {
                5,6
            },
            {
                7,8
            }
        },
        {
            {
                9,10
            },
            {
                11,12
            },
            {
                13,14
            },
            {
                15,16
            }
        },
        {
            {
                17,18
            },
            {
                19,20
            },
            {
                21,22
            },
            {
                23,24
            }
        },
        {
            {
                25,26
            },
            {
                27,28
            },
            {
                29,30
            },
            {
                31,32
            }
        }
    };
    p=&A[0][0][0];
    // MATRIX INPUT
    /*printf("Enter the 3d matrix-\n");
    for(int r=0;r<4;r++)
    {
        for(int c=0;c<4;c++)
        {
            scanf("%d",&A[r][c][0]);
        }
        printf("\n");
        for(int c=0;c<4;c++)
        {
            scanf("%d",&A[r][c][1]);
        }
        printf("\n\n");
    }*/

    // PRINT MATRIX
    for(int r=0;r<4;r++)
    {
        for(int c=0;c<4;c++)
        {
            printf("%d\t",A[r][c][0]);
        }
        printf("\n");
        for(int c=0;c<4;c++)
        {
            printf("%d\t",A[r][c][1]);
        }
        printf("\n\n");
    }

    for(int r=0;r<4;r++)
    {
        printf("%d\t%d",A[r][0][0],A[r][2][0]);
        printf("\n");
    }

    // Pointer
    for(int r=0;r<4;r++)
    {
        printf("%d\t%d\n",*(p+r*8),*(p+r*8+4));
    }
    return 0;
}