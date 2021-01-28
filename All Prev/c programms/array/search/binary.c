#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int Lmost(int a[],int left,int right,int key)
{
    int mid=(left+right)/2;
    
    // Base cases
    if(a[left]>=key || a[right]<key || left-right==0 )
        return 0;
    
    if(a[mid]>=key) 
    {
        if(a[mid-1]<key)
            return mid-1;//a[mid-1];
        return Lmost(a,left,mid-1,key); //Recursive call()
    }

    // if(a[mid]<key) //FOR EFFICIENCY
    else
    {
        if(a[mid+1]>=key)
            return mid;//a[mid];
        return Lmost(a,mid+1,right,key); //Recursive call()
    }
    
}

int Rmost(int a[],int left,int right,int key)
{
    int mid=(left+right)/2;
    //Base case key is present or not
    if(a[left]>key || a[right]<=key || left-right==0)
        return 0;

    if(a[mid]<=key)
    {
        if(a[mid+1]>key)
            return mid+1;//a[mid+1];
        return Rmost(a,mid+1,right,key);
    }
    if(a[mid]>key)
    {
        if(a[mid-1]<=key)
            return mid;//a[mid];
        return Rmost(a,left,mid-1,key);
    }
}
int occur(int a[],int left,int right,int key)
{
    int n,l,r;
    l=Lmost(a,left,right,key);
    r=Rmost(a,left,right,key);
    n=r-l-1;
    return n;
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int b[]={2,3,4,4,4,4,12,12,20,30};
    int l,r,key;
    // printf("Enter the left : ");
    // scanf("%d",&l);
    // printf("Enter the right : ");
    // scanf("%d",&r);
    printf("Enter the key : ");
    scanf("%d",&key);
    printf("given number is %d\n",occur(b,0,8,key));
    printf("given number is %d\n",Rmost(b,0,8,key));
    printf("given number is %d",Lmost(b,0,8,key));
    return 0;
}