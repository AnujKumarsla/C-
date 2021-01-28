#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void bin(int n,char a[])
{
    int static count;
    if(n<1)
        printf("%d. %s\n",++count,a);
    else
    {
        a[n-1]='0';
        bin(n-1,a);

        a[n-1]='1';
        bin(n-1,a);
    }
    
}
int main()
{
    char a[4];
    bin(4,a);

    printf("Hello, world!\n");
    
    return 0;
}