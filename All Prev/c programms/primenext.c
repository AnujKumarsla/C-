#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int nxtPrm(int n)
{
    int i;
    for(int x=0;x<10;x++ )
    {
        for(i=0;i<n;i++)
            if(n%i==0)
                break;
        if(i==n-1)
            return i;
        n++;
        i=0;
    }
    
}
int main()
{
    int num,x;
    printf("Hello, world!\n");
    printf("Enter the number : ");
    scanf("%d",&num);
    x=nxtPrm(num);
    printf("The next prime number is %d",x);
    printf("test 0");
    
    return 0;
}