// The sum of the squares of the first ten natural numbers is,

// 12 + 22 + ... + 102 = 385
// The square of the sum of the first ten natural numbers is,

// (1 + 2 + ... + 10)2 = 552 = 3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long int sumSq=0,Sqsum=0,total=0;
    printf("Hello, world!\n");
    for(int i=0;i<=100;i++)
    {
        sumSq=sumSq+i*i;
        total=total+i;
    }
    Sqsum=total*total;
    printf("%d\t%d\n",sumSq,Sqsum);
    printf("%d\n",Sqsum-sumSq);

    return 0;
}

/*
Congratulations, the answer you gave to problem 6 is correct.

You are the 465479th person to have solved this problem.

This problem had a difficulty rating of 5%. The highest difficulty rating you have solved remains at 5%. 
*/