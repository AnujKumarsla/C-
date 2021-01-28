#include <stdio.h>
#include <conio.h>

int main()
{
    extern unsigned char s='x';
    signed char s='y';
    printf("%d",s);
    getch();
    return 0;
}