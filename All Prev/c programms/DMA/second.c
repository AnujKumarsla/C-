#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fout(float a[],int s)
{
    for(int i=0;i<s;i++)
        printf("%.2f\t",a[i]);
    printf("\n");
}
void take(float a[],int s)
{
    for(int i=0;i<s;i++)
        scanf("%f\t",&a[i]);
    printf("\n");
}
void iout(int a[],int s)
{
    for(int i=0;i<s;i++)
        printf("%d\t",a[i]);
    printf("\n");
}
int main()
{
    float *f;
    int *a;
    f=(float *)calloc(10,4);
    take(f,10);
    fout(f,10);
    a=(int *)realloc(f,2);
    iout(a,10);
    return 0;
}