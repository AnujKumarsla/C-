#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int in(int arr[],int n);
int notIn(int x,int arr[],int len);



int main()
{
    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37};
    int num,x=2,y;
    printf("Enter the number : ");
    scanf("%d",&num);
    while (x<num/2+1)
    {
        y=num-x;
        if(!notIn(y,arr,12))
            printf("%d + %d = %d\n",x,y,num);
        x=in(arr,12);
    }
    printf("Sorry");
    
    return 0;
}

int in(int arr[],int n)
{
    static int i;
    ++i ;
    if(i<=n)
        return arr[i-1];
    // return 0;
    exit(0);
}

int notIn(int x,int arr[],int len)
{
    for(int i=0;i<len;i++)
        if(arr[i]==x)
            return 0;
    return 1;
}

