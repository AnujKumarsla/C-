#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int wordcount(char s[],int x)
{
    int n=0;
    if(s[0]!='\0')
    {
        for(int i=0;i<x && s[i+1]!='\0';i++)
            if(s[i]==' '&& s[i+1]!=' ')
                n++;
        n=s[0]==' '?n:n+1;
    }
    return n;
}
int main()
{
    char s[100];
    printf("Enter the string : ");
    gets(s);
    printf("The total number of words is %d",wordcount(s,100));
    return 0;
}