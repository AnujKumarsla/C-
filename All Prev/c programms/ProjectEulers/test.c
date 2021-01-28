#include<stdio.h>
#include<stdlib.h>

void add(int a[],int n)
{
    static int i=0;
    a=realloc(a,n+sizeof(int));
    a[n]=i++;
}
int main()
{
    int *a,x=0;
    a=malloc(sizeof(int)*4);
    for(int i=0;i<4;i++)
        a[i]=x++;
    add(a,4);
    for(int i=0;i<5;i++)
        printf("%d\n",a[i]);
    printf("========================\n");
    add(a,4+1);
    for(int i=0;i<5+1;i++)
        printf("%d\n",a[i]);
    printf("========================\n");
    add(a,4+2);
    for(int i=0;i<5+2;i++)
        printf("%d\n",a[i]);
    printf("========================\n");
    
    return 0;
}