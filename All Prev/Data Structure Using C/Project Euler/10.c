/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>



int prim[2000001];
void sieve(long int n){
    long int i;int j=2;
    prim[0]=0;prim[1]=0;
    for(i=2;i<=n;i++)
        prim[i]=1;
    while(j<=sqrt(n))
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
    int i,n,count=0;int sum=0;
    printf("Enter the number to print prime number upto that number : ");
    scanf("%d",&n);
    // if(!(n<2000000))
    // {
    //     printf("Sorry you entered wrong input");
    //     exit(0);
    // }
    sieve(n);
    printf("The prime numbers are : \n");
    for(i=2;i<=n;i++)
    {
        if(prim[i]==1)
            sum+=i;
            // printf("%d %d\n",++count,i);
        // if(count==2000001)
        //     break;

    }
    printf("%d\n",sum);
    return 0;
}