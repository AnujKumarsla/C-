#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *a,char *b)
{
    char tmp=*a;
    *a=*b;
    *b=tmp;
}
void prmt(char s[],int i,int n)
{
    int static count;
    int j;
    if(i==n)
    {
        count++;
        printf("%d. %s\n",count,s);
    }
    else
    {
        for(j=i;j<=n;j++)
        {
            swap(s+i,s+j);
            prmt(s,i+1,n);
            swap(s+i,s+j);
        }
    }
    
}
int main()
{
    char s[]="ABCD";
    prmt(s,0,strlen(s)-1);
    printf("Hello, world!\n");
    
    return 0;
}