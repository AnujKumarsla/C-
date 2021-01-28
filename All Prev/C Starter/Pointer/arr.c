#include <stdio.h>
#include <conio.h>

int main() 
{
    int a[3][3]={{0,1,2},
        {3,4,5},
        {6,7,8}
        };
    int b[3][2]={
        {0,1},
        {2,3},
        {4,5}
    };
    int R[3][2];
    int r1,c1,c2,r2;
    // FILLING NULL VALUES IN RESULTING MATRIX
    for(r1=0;r1<3;r1++)
        for(c1=0;c1<2;c1++)
            R[r1][c1]=0;

    //  CALCULATION OF RESULTING MATRIX
    for(r1=0;r1<3;r1++)
        for(c1=0;c1<3;c1++)
                for(c2=0;c2<2;c2++)
                    R[r1][c2]+=(a[r1][c1]*b[c1][c2]);

    // PRINTINT RESULTING MATRIX
    printf("RESULTING MATRIX :-\n");
    for(r1=0;r1<3;r1++)
    {
        for(c1=0;c1<2;c1++)
            printf("%d ",R[r1][c1]);
        printf("\n"); 
    }
    return 0;
}