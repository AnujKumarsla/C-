#include <stdio.h>
#include <conio.h>

int main()
{
        int a[10];
        int *x=&a[2],*y=&a[5];
        printf("value of x is %u\n",x);
        printf("value of x is %u\n",y);
        printf("value of x-y is %u\n",y+1);
        printf("value of y-x is %u\n",y-1);
    return 0;
}