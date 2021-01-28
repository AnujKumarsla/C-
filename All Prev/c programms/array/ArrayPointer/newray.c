#include <stdio.h>
#include <conio.h>
int main()
{
    int a[5][4][3];
    int *p=&a[0][0][0];
    int r,c,x;
    printf("Enter the value \n");
    for(int x=0;x<5;x++)
    {
        for(int y=0;y<4;y++)
        {
            for(int z=0;z<3;z++)
                scanf("%d ",&a[x][y][z]);
        }
    }
    printf("\n==============================\n");
    for(int x=0;x<5;x++)
    {
        for(int y=0;y<4;y++)
            printf("%d  ",a[x][y][0]);
        printf("\n");

        for(int y=0;y<4;y++)
            printf("%d  ",a[x][y][1]);
        printf("\n");

        for(int y=0;y<4;y++)
            printf("%d  ",a[x][y][2]);
        printf("\n---------------------------------\n");
    }
    r=1;c=2;x=1;
    printf("%d\n",*(p+r*12+c*3+x));
    printf("%d\n",a[r][c][x]);
    r=3;c=1;x=0;
    printf("%d\n",*(p+r*12+c*3+x));
    printf("%d\n",a[r][c][x]);
    r=1;c=3;x=0;
    printf("%d\n",*(p+r*12+c*3+x));
    printf("%d\n",a[r][c][x]);
    return 0;
}