#include <stdio.h>
#include <conio.h>

int main ()
{
    int a,b;
    a=6;b=3;
    a+=b;
    b=a-b;
    a=a-b;
    printf ("a=%d & b=%d",a,b);
    return 0;
}