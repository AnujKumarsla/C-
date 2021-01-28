#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int bin(int a[],int start,int end,int key)
{
    int mid=(start+end)/2;
    if(start>end)
        return 0;
    
    if(a[mid]==key)
        return mid;

    else if(a[mid]>key)
        return bin(a,start,mid-1,key);
    else 
        return bin(a,mid+1,end,key);
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    printf("given number is %d",bin(a,0,9,6));

    return 0;
}