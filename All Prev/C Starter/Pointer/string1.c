#include <stdio.h>
#include <conio.h>

int len(char *);
void rev(char *);

int main()
{
    char s[40];
    gets(s);
    printf("%d\n",len(s));
    puts(s);
    printf("\n");
    rev(s);
    puts(s);
}
int len(char *s)
{
    int i;
    for(i=0;*(s+i)!='\0';i++);
    return i;
}
void rev(char *s)
{
    // puts(*s);
    int i,c;
    for(c=0;*(s+c)!='\0';c++);
    i=(c/2)-1;
    char temp;
    for(;i>=0;i--)
    {
        temp=*(s+i);
        *(s+i)=*(s+( len(s)-1-i ));
        *(s+( len(s)-1-i ))=temp;
    }

}