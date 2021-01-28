#include<stdio.h>
#include<conio.h>
#include<string.h>

int ispalindrome(char s[]);
int main()
{
    int a,len,i;
    char s[20];
    printf("Enter the String in s : ");
    scanf("%s",s);
    if(ispalindrome(s))
        printf("The given string is Palindrome");
    else
        printf("The given string is not a palindrome");
}
int ispalindrome(char s[])
{
    int a,len,i;
    len=strlen(s);
    for(i=0;i<len/2;i++)
    {
        // printf("%c %c\n",s[i],s[len-i-1]);
        if( s[i]!=s[len-i-1] )
        {
            // printf("The given string is not a palindrome\nmiss_match at %d and %d",a,len-a);
            return 0;
        }

    }
    // printf("Give String is Paindrome");
    // getch();
    return 1;
}