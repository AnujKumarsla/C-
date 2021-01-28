#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int n,fac,lstfac,mxfac;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        lstfac=2;
        n=n/2;
        while (n%2==0)
            n=n/2;
    }
    else
        lstfac=1;
    fac=3;
    mxfac=floor(sqrt(n));

    while(n>1 && fac<=mxfac)
    {
        if(n%fac==0)
        {
            n=n/fac;
            lstfac=fac;
            while(n%fac==0)
            {
                n=n/fac;
            }
            mxfac=sqrt(n);
        }
        fac=fac+2;
    }
    if(n=1)
        printf("%d",fac);
    else 
        printf("%d",n);
    
    return 0;
}