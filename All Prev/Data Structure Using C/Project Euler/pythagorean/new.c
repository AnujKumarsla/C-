#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    
    printf("Hello, world!\n");
    int a,b,n;

    printf("Input Natural Number n (n<2,100,000,000) : ");
    scanf("%d",&n);
    
    for(a=1;a<=100;a++)
        for(b=1;b<=100;b++)
    
            if(a<b && a*a + b*b == n*n)
            {
                printf("(%d, %d, %d)\n",a,b,n);
            }
            /*else
            {
                printf("impossible \n");
            }
              */ 
    return 0;
}