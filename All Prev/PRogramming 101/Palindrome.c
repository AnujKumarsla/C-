#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int a,len;
    char s[20];
    printf("Enter the String in s : ");
    scanf("%s",s);
    len=strlen(s)-1;  //7
    a=len/2;    // 7/2-1= 2
    for(;a>=0;--a)
    {
        // printf("%c %c\n",s[a],s[len-a]);
        if(! ( s[a]==s[len-a] ) )
        {
            printf("The given string is not a palindrome\nmiss_match at %d and %d",a,len-a);
            return 0;
        }

    }
    printf("Give String is Paindrome");
    // getch();
    return 0;
}