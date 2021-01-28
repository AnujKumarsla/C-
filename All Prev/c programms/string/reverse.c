#include <stdio.h>
#include <conio.h>

void reverse(char *p);
int length(char *p);

int main()
{
    char s[20];
    char c[20]="anuj kumarsla";
    printf("Enter the string : ");
    gets(s);
    printf("The length of the Entered String is %d\n",length(s));
    reverse(s);
    printf("%s\n",s);
    printf("%s\n",c);
    return 0;
}
void reverse(char *p)
{
    int l;
    for(l=0;*(p+l)!='\0';l++);
    for(int i=0;i<l/2;i++)
    {
        char t=*(p+i);
        *(p+i) = *(p+l-1-i);
        *(p+l-1-i) = t;
    }
}
int length(char *p)
{
    int l;
    for(l=0;*(p+l)!='\0';l++);
    return l;
}