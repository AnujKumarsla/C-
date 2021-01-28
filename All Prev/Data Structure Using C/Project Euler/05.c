// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int isDivisible(long int n)
{
    for(int i=11;i<=20;i++)
    {
        if(n%i!=0)
            return 0;
    }
    return 1;
}
int main()
{
    int count=0;
    printf("Hello, world!\n");
    // printf("%d\n",isDivisible(2520));
    // 1,00,00,000 <x <10,00,00,000
    for(long int i=10000000;i<100000000;i++)
    {
    // printf("%d\n",i);
        if(isDivisible(i*20))
        {
            printf("%d. %d\t%d\n",++count,i,i*20);
            if(count==5)
                break;
        }

    }
    return 0;
}