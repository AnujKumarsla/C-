#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(char s[])
{
    int len;
    for(len=0;s[len]!='\0';len++);
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-1-i])
            return 0;
    }
    return 1;
}

int isNumPalindrome(int n)
{
    int y,x,num=0;
    y=n;
    while(y>0)
    {
        x=y%10;
        y=y/10;
        num=num*10+x;
    }
    if(n==num)
        return 1;
    return 0;
}
int main()
{
    char s[10];
    printf("Hello, world!\n");
    printf("%d is the result.\n",isPalindrome("kljlk"));
    printf("%d is the result.\n",isNumPalindrome(12321));


    for(int i=999;i>100;i--)
    {
        for(int j=999;j>899;j--)
        {
            if(isNumPalindrome(j*i))
                printf("%d\t%d %d\n",i*j,i,j);
        }
    }
    
    return 0;
}