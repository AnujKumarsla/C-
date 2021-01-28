#include <stdio.h>
#include <conio.h>
void printit(int a[],int r,int c);
int main()
{
    int a[2][3];
    int *p=a[1];
    for(int r=0;r<2;r++)
        for(int c=0;c<3;c++)
            scanf("%d",&a[r][c]);
    printit(a[0],2,3);

            // scanf("%d",&p[r*3+c]);
            // scanf("%d",p[r*3+c]);    error

            // scanf("%d",*(p+r*3+c));  error
            // scanf("%d",(p+r*3+c));
    printf("============\n");
    // printit(a[0],2,3);
    /*
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
            printf("%d\t",a[r][c]);
            // printf("%d\t",p[r*3+c]);
            // printf("%d\t",*(p+r*3+c));
            // printf("%d\t",(p+r*3+c));    error
        printf("\n");
    }
        
    printf("============\n");
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
            printf("%d\t",p[r*3+c]);
        printf("\n");
    }
        
    printf("============\n");
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
            printf("%d\t",p[r*3+c]);
        printf("\n");
    }
    */

    
    return 0;
}
void printit(int a[],int r,int c)
{
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i*c+j]);
        }
        printf("\n");
    }
}