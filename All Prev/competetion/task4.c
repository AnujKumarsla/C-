// https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include<stdio.h>
#include<conio.h>
int main()
{
    int n, k, and=0, or=0, xor=0, i, j;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(and < (i & j)  && (i & j) < k  &&  i<j )
            and=(i&j);

            if(or < (i | j)  && (i | j) < k  &&  i<j )
            or =(i | j);

            if(xor < ( i^ j) && ( i^ j)< k  &&  i<j )
            xor =(i ^ j);
        }
    }
    printf("%d\n%d\n%d",and,or,xor);
    return 0;
}