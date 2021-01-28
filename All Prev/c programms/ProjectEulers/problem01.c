#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n=1000,sum=0;

    for(int i=0;i<n;i++)
        if(i%3==0 || i%5==0)
            sum+=i;

    printf("%d",sum);
    return 0;
}