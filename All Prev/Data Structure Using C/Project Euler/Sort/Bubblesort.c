#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void bubbleSort(int a[],int n)
{
    int count=0;
    int temp;
    for(int i=n-2;i>=0;i--)
        for(int j=0;j<=i;j++)
        {
            count++;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    printf("%d ====\n",count);
}
void modBubbleSort(int a[],int n)
{
    int temp,flag=0;
    int count=0;
    for(int i=n-2;i>=0;i--){
        flag=0;
        for(int j=0;j<=i;j++)
        {
            if(a[j]>a[j+1])
            {
                count++;
                flag=1;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        if(flag==0)
            break;
    
    }
    printf("%d ====\n",count);

}
int fac(int n)
{
    int x;
    if(n==1)
        return n;
    x=n*fac(n-1);
    return x;
}
int main()
{
    int a[]={1,3,15,19,21,23,26,28,31,69,72,85,89,91,93,97,35,75,4,5,8,9,11,12,79,81,39,45,56,59,61,65,101};
    int n=33;
    printf("Hello, world!\n");
    //n=nuber of the elements
    // i=second last index of the array 
    // modBubbleSort(a,n);
    bubbleSort(a,n);
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    printf("\n\n\n========\n%d",fac(4));
    return 0;
}   