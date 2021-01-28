/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int limit;
// triplet: a^2 + b^2 = c^2 
    int a, b, c = 0; 
    // loop from 2 to max_limitit 
    int m = 2; int total=0,sum=0;
    printf("Hello, world!\n");
    
    printf("Enter the sum : ");
    scanf("%d",&total);
  
  
    // Limiting c would limit 
    // all a, b and c 
    // while (c < limit) { 
    while (sum <= total) { 
  
        // now loop on j from 1 to i-1 
        for (int n = 1; n < m; ++n) { 
            // Evaluate and print 
            // triplets using 
            // the relation between 
            // a, b and c 
            a = m * m - n * n; 
            b = 2 * m * n; 
            c = m * m + n * n; 
            sum=a+b+c;
  
            printf("%d %d %d = %d\t%d+%d+%d=%d\n",a,b,c,a*a+b*b+c*c,a,b,c,sum);
            // if (c > limit) 
            if (sum > total) 
                break; 
        } 
        m++; 
    } 
    return 0;
}