#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



int* sieve(long int n){
    long int i,j=2;
    int * prim=malloc((n+1)*sizeof(int));
    prim[0]=0;prim[1]=0;
    for(i=2;i<=n;i++)
        prim[i]=1;
    while(j<=n)
    {
        if(prim[j]==0)
        {
            j++;
            continue;
        }
        for(i=j*j;i<=n;i=i+j)
            prim[i]=0;
        j++;
    }
    return prim;
}

int* Prime(long int n,int *size)
{
    int x=0;
    int *prim=sieve(n);
    for(long int i=2;i<=n;i++)
        if(prim[i]==1)
            x++;
    int *fac=malloc(sizeof(int)*(x));
    *size=x;
    x=0;
    for(long int i=2;i<=n;i++)
        if(prim[i]==1)
            fac[x++]=i;
    free(prim);
    return fac;

}
int main()
{
    int *fac,size,x;
    long int n;
printf("Enter the number : ");
scanf("%d",&n);
    fac=Prime(n,&size);
    for(int i=size-1;i>0;i--)
        if(n%fac[i]==0)
        printf("%d",fac[i]);
    return 0;
}