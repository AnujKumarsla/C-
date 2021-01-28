#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void mysort(int a[],int n)
{
    int temp;
    for(int i=1;i<n;i++)
        for(int j=i;j>=1;j--)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
            else
                break;
        }
}
void insertion(int a[],int n)
{
    int temp,j;
    for(int i=1;i<=n-1;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0 && temp<a[j];j--)
            a[j+1]=a[j];
        a[j+1]=temp;
    }
}
int main()
{
    int a[]={9,8,7,6,5,4,2,3,1,0},n=10;
    printf("Hello, world!\n");
    // insertion(a,n);
    mysort(a,n);
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    
    return 0;
}