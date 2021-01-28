#include <stdio.h>
#include <stdlib.h>
int notIn(int x,int arr[],int len);

int main()
{
    int num,arr[]={1,3,5,7,9,11};
    printf("Enter the number : ");
    scanf("%d",&num);
    if(notIn(num,arr,6) )
        printf("given number is not in the array");
    else
        printf("Given number is in the array");

    return 0;
}
int notIn(int x,int arr[],int len)
{
    for(int i=0;i<len;i++)
        if(arr[i]==x)
            return 0;
    return 1;
}