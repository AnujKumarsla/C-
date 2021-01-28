// PROGRAM TO CONVERT DECIMAL TO BINARY
#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    int num=0,len;
    printf("Enter the number you want : ");
    scanf("%d",&num);
    for(int i=0;num>1;i++)
    {
        if(num%2==1)
            a[i]='1';
        else
            a[i]='0';
        num/=2;
        if(num==1)
        {
            a[i+1]='1';
            a[i+2]='\0';
        }
    }
    // length counter
    for(len=0;a[len]!='\0';len++);
    // string printer
    for(int i=len-1;i>=0;i--)
        printf("%c",a[i]);
    strrev(a);
    printf("\n %d Binary of this number is : ",len);
    puts(a);
    return 0;
}