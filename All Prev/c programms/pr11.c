#include <stdio.h>
#include <conio.h>
// program to shift inputed data by two bits
int main()
{
    int num,a;
    printf("Read the integer from keyboard : ");
    scanf("%d",&num);
    a=num<<3;
    printf("\nthe left shifted value is %d",a);
    return 0;
}