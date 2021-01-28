//https://www.hackerrank.com/challenges/printing-pattern-2/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,i,c,j,ccount=4;
    n=4;
    r=3;
    j=n;
    for (i=1;i<=8;i++)
    {
        if(j==n)
        {
            printf("   %d%d   ",n,ccount);
            j--;ccount--;
        }
        else 
        {
            if(ccount>1)
            {
                printf("   0%d%d   ",j,ccount);ccount--;
                if(j!=r)
                    j--;
            }
            else 
            {
                if(i<7)
                   {
                        if(i<=(2*j+1))
                        {
                            printf("   %d%d   ",j,ccount);
                            if(j!=r)
                            j++;
                        }
                    }
                else 
                    {
                        printf("      %d    ",++j);
                    }
            }
        }
    }
}