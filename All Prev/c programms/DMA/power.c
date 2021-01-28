#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    int m,n,t=1;
    printf("Enter the number : ");
    scanf("%d",&m);
    printf("Enter raise to the power : ");
    scanf("%d",&n);
    p=(int *)malloc((n+1)*sizeof(int));
    for(int i=0;i<=n;i++)
    {
        p[i]=t;
        t*=m;
    }
    for(int i=0;i<=n;i++)
        printf("2 raise to the power of %d = %d\n",i,p[i]);
    return 0;
}