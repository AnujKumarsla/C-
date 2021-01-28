#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void RegMerge(int a[],int len1,int b[],int len2,int c[])
{
    int na=0,nb=0,nc=0;
    while(na<=len1  &&   nb<=len2)
        if(a[na]<b[nb])
            c[nc++]=a[na++];
        else 
            c[nc++]=b[nb++];


    if(na>len1)
        for(int i=0;i<=len2-nb;i++)
            c[nc++]=b[nb++];
    else 
        for(int i=0;i<=len1-na;i++)
            c[nc++]=a[na++];
}

void NonMerge(int a[],int n1,int LBA,int b[],int n2,int LBB,int c[],int LBC)
{
    int na=LBA,nb=LBB,nc=LBC;
    int len1=LBA+n1-1;
    int len2=LBB+n2-1;
    while(na<=len1  &&   nb<=len2)
        if(a[na]<b[nb])
            c[nc++]=a[na++];
        else 
            c[nc++]=b[nb++];


    if(na>len1)
        for(int i=0;i<=len2-nb;i++)
            c[nc++]=b[nb++];
    else 
        for(int i=0;i<=len1-na;i++)
            c[nc++]=a[na++];
}
void mergePass(int a[],int n,int len,int b[])
{
    int LB;

    int q,s,r;
    q=n/(2*len);
    s=2*len*q;
    r=n-s;

    for(int i=0;i<q;i++)
    {
        LB=1+(2*i-2)*len;
        NonMerge(a,len,LB,a,len,LB+len,b,LB);
    }
    //only one subarray left till now
    if(r<=len)
        for(int i=0;i<r;i++)
            b[s+i]=a[s+i];
    else 
        NonMerge(a,len,s+1,a,r,len+s+1,b,s+1);
}

void mergeSort(int a[],int n)
{
    int len=1;
    int b[11];
    while (len<n)
    {
        mergePass(a,n,len,b);
        mergePass(b,n,2*len,a);
        len=4*len;
    }
    
}
int main()
{
    int i,a[]={11,66,88,33,66,77,99,88,22,55,10};
    for(i=0;i<=10;i++)
        printf("%d ",a[i]);
    mergeSort(a,11);
    printf("\n");
    for(i=0;i<=10;i++)
        printf("%d ",a[i]);
    printf("\nHello, world!\n");
    
    return 0;
}