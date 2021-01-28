#include<stdio.h>
#include<conio.h>

char* reverse (char *p);

int main()
{
    char s[10];
    gets(s);
    printf("%s",reverse(s));
    return 0;
}
char* reverse (char *p)
{
    int l,i; 
    char ch;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        ch=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=ch;
    }
    return (p);
}