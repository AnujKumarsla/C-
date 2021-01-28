//Sequential Search
#include <stdio.h>
#include <stdlib.h>
int search(int a[],int size,int item)
{
    for(int i=0;i<size;i++)
        if(a[i]==item){
            printf("Item is found\n");
            return i;
        }
    printf("Item is not found\n");
    return -1;
}

int binSearch(int a[],int l,int r,int num)
{
    int mid=(l+r)/2;
    if(num>a[mid])
        binSearch(a,mid,r,num);
    else if(num<a[mid])
        binSearch(a,l,mid,num);
    else
    {

        printf("Item is found at %d",mid);
    }
    
}
int main()
{
    int n;
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    printf("Enter the number you want to search : ");
    scanf("%d",&n);
    printf("Index Of the number : %d\n",search(a,16,n));
    binSearch(a,0,15,n);
    return 0;
}