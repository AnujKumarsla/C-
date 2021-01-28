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
    int m = 2; 
    printf("Hello, world!\n");
    
    printf("Enter the limit : ");
    scanf("%d",&limit);
  
  
    // Limiting c would limit 
    // all a, b and c 
    while (c < limit) { 
  
        // now loop on j from 1 to i-1 
        for (int n = 1; n < m; ++n) { 
            // Evaluate and print 
            // triplets using 
            // the relation between 
            // a, b and c 
            a = m * m - n * n; 
            b = 2 * m * n; 
            c = m * m + n * n; 
  
            if (c > limit) 
                break; 
  
            printf("%d %d %d = %d\t%d+%d+%d=%d\n",a,b,c,a*a+b*b+c*c,a,b,c,a+b+c);
        } 
        m++; 
    } 
    return 0;
}