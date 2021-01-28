#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char s[]="my name is anuj kumarsla";
    s[6]='\0';
    s[7]='\0';
    s[8]='\0';
    for(int i=0;i<23;i++)
        putchar(s[i]);
    return 0;
}