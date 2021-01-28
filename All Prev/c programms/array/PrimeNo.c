#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



int prim[10000];
void sieve(int n){
    int i,j=2;
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
}
int main()
{
    int i,n;
    printf("Enter the number to print prime number upto that number : ");
    scanf("%d",&n);
    if(!(n<10000))
    {
        printf("Sorry you entered wrong input");
        exit(0);
    }
    sieve(n);
    printf("The prime numbers are : \n");
    for(i=2;i<=n;i++)
        if(prim[i]==1)
            printf("%d\n",i);
    return 0;
}