#include<stdio.h>
#include<conio.h>
int main()
{
    char s[3][20];
    int i;
    // clrscr();
    printf("Enter the names :\n");
    for(i=0;i<=2;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<=2;i++)
    {
        puts(s[i]);
    }
    getch();
    return 0;
}