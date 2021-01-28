#include <stdio.h>
#include <stdlib.h>
// t1 t2 t
int main()
{
    // 4000000
    int n=4000000,t1=0,t2=1,t=0,sum=0;
    for(int i=0;i<n;i++)
    {
        t=t1+t2;
        if(t>n)
            break;
        printf("%d\t",t);
        if(t%2==0)
            sum+=t;
        t1=t2;
        t2=t;
    }
    printf("\n%d",sum);
    return 0;
}