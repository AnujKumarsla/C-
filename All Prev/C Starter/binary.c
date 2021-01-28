#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a,i=0;
    char s[20]="\0";
    printf("Enter a number : ");
    scanf("%d",&a);
    while (a>0)
    {
        if(a%2==0)
        {
            strcat(s,"0");
            a/=2;
        }
        else
        {
            strcat(s,"1");
            a/=2;
        }
        i++;
    }
    strrev(s);
    puts(s);
    printf("%d Bits number",i);
    return 0;
}