#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int Min(int a[],int n)
{
    int value=0;
    for(int i=1;i<n;i++)
        if(a[i]<a[value])
            value=i;
    return value;
}
int sort(int a[],int n)
{
    int y,temp;
    for(int i=0;i<n;i++)
    {
        y=Min(a+i,n-i)+i;
        if(a[i]>a[y])
        {
            temp=a[i];
            a[i]=a[y];
            a[y]=temp;
        }
    }
}
int main()
{
    int a[10]={5,9,3,4,2,8,1,7,6,0},n=10;
    printf("Hello, world!\n");

    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    sort(a,n);
    printf("sorted array : \n");
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    
    return 0;
}