#include <stdio.h>
#include <conio.h>

int rdln(char s[],int size)
{
    int c,i=0;
    c=getchar();
    while(c!='\n' && c!=EOF)
    {
        s[i]=c;
        c=getchar();
        i++;
    }
    s[i]='\0';
    return i;

}

int main()
{
    char s[25];
    printf("Enter the string : ");
    printf("The given string is \n%s\n the length of string is %d",s,rdln(s,25));
    return 0;
}