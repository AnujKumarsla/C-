#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int count=0;
int Min(int a[],int start,int end)
{
    int index=start,value=a[start];
    for(int i=start+1;i<=end-1;i++)
        // if(!(a[i]>value))
        if(a[i]<value)
        {
            value=a[i];
            index=i;
        }
    return index;
}
void select(int a[],int n)
{
    int low,temp;
    for(int i=0;i<=n-2;i++)
    {
        low=Min(a,i,n);
        temp=a[i];
        a[i]=a[low];
        a[low]=temp;
    }
}
int main()
{
    // int a[10]={5,9,3,4,2,8,1,7,6,0},n=10;

    int a[]={36,2,5,3,8,9,7,6};
    int n=8;
    printf("Hello, world!\n");
    // Min(a+2,n-2);
    select(a,n);
    for(int i=0;i<n;i++)
        // Min(a,i,n);
        printf("%d\t",a[i]);
    return 0;
}