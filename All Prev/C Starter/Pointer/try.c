#include <stdio.h>
#include <conio.h>

char* reverse(char *x);
int len(char *);

int main()
{
    char s[20];
    gets(s);
    printf("%s\n",reverse(s));
    printf("%d",len(s));
    getch();
    return 0;
}
char* reverse(char *x)
{
    int i,j;
    char t;
    for(i=0;*(x+i)!='\0';i++);
    for(j=0;j<i/2;j++)
    {
        t=*(x+j);
        *(x+j)=*(x+i-1-j);
        *(x+i-1-j)=t;
    }
    return x;
}
int len(char *x)
{
    int i;
    for(i=0;*(x+i)!='\0';i++);
    return i;
}