// PROGRAM TO CONVERT DECIMAL TO BINARY
#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    int num=0,len,j=1;
    printf("Binary : ");
    gets(a);
    // length counter
    for(len=0;a[len]!='\0';len++);
    // string printer
    for(int i=len-1;i>=0;i--)
    {
        if(a[i]=='1')
        num+=j;
        j*=2;
    }
    printf("Decimal : %d",num);

    return 0;
}