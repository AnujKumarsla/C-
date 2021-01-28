#include <stdio.h>
#include <string.h>
#include <conio.h>
int in(int arr[],int n);
//  iteration through given array 
int main()
{
    int arr[]={1,5,6,4,45},x;
    for(int i=0;i<7,x=in(arr,5);i+=1)
        printf("%d\n",x);
    return 0;
}
int in(int arr[],int n)
{
    static int i;
    ++i ;
    if(i<=n)
        return arr[i-1];
    return ;
}