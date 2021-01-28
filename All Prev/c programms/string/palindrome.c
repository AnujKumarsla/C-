#include <stdio.h>
#include <conio.h>
#include <string.h>
int plnd(char *s);
int main()
{
    // int l,i;
    char s[50];
    printf("Enter the string : ");
    gets(s);
    if(plnd(s))
        printf("The given string is palindrom");
    else
        printf("The given string is not a palindrome");
    
    // l=strlen(s);
    
    /*for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
            break;
    }
    if(i!=l/2)
        printf("\nGiven string is not a palindrome");
    else
        printf("\nGiven string is a palindrome");
        */
    return 0;
}
int plnd(char *s)
{
    int l;
    for(l=0;*(s+l)!='\0';l++);
    for(int i=0;i<l/2;i++)
        if(*(s+i)!=*(s+l-1-i))
            return 0;
    return 1;
}
