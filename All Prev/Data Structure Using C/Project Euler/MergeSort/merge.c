#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void merge(int a[],int n1,int index1,int b[],int n2,int index2,int c[],int index)
{
    printf("n1=%d n2=%d l1=%d l2=%d \n",n1,n2,index1,index2);
    while(n1 && n2)
    {
        if(a[index1]<b[index2])
        {
            c[index]=a[index1];
            index++;
            index1++;
            n1--;
        }
        else
        {
            c[index]=b[index2];
            index++;
            index2++;
            n2--;
        }
    }
    while(n1)
    {
        c[index]=a[index1];
        index++;
        index1++;
        n1--;
    }
    while(n2)
    {
        c[index]=a[index2];
        index++;
        index2++;
        n2--;
    }
    for(int i=0;i<11;i++)
        printf("%d\t",c[i]);
    printf("\n");
}
void mergePass(int a[],int n,int l,int b[])
{
    int j,LB;
    int q,s,r;
    q=n/(2*l);
    s=2*l*q;
    r=n-s;

    for(j=0;j<q;j++)
    {
        LB=(2*j)*l;
        merge(a,l,LB,a,l,LB+l,b,LB);
    }
    if(r<=l)
    {
        for(j=0;j<r;j++){
        printf("q=%d r=%d s=%d j=%d\n",q,r,s,j);
            b[s+j]=a[s+j];}
    }
    else
    {
        merge(a,l,s,a,r-l,s+l,b,s);
    }
    printf("final=====\n");
    for(int i=0;i<11;i++)
        printf("%d\t",b[i]);
    printf("\n");
    for(int i=0;i<11;i++)
        printf("%d\t",a[i]);
    printf("\n");
}
void merge_sort(int a[],int n)
{
    int l=1,b[11];
    int alt=1;
    while(l<n)
    {
        if(alt--)
            mergePass(a,n,l,b);
        else{
            mergePass(b,n,l,a);
            alt++;
        }
        l=2*l;
    }
}
/*
        if(alt--)
            mergePass(a,n,l,b);
        else{
            mergePass(b,n,l,a);
            alt++;
        }
        l=2*l;
*/
int main()
{
    int i,a[]={11,66,88,33,66,77,99,88,22,55,10};
    for(i=0;i<=10;i++)
        printf("%d ",a[i]);
    merge_sort(a,11);
    printf("\n");
    for(i=0;i<=10;i++)
        printf("%d ",a[i]);
    printf("\nHello, world!\n");
    
    return 0;
}