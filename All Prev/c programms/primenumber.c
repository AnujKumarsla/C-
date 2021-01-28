#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int isPrm(int n)
{
    if(n<=0)
        return 0;
    
    for(int i=0;i<n;i++)
        if(n%i==0)
            return 0;
    
    return 1;
}

int nxtPrm(int n)
{
    if(isPrm(n))
        // prinf("prime number %d",n);
        return n;
    
    for(int i=n;i<n+50;i++)
        if(isPrm(i))
            // prinf("prime number %d",i);
            return i;
    return 0;
}
int main()
{
    int num;
    printf("Hello, world!\n");
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The next prime number is %d",nxtPrm(num));
    
    return 0;
}