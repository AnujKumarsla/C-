#include <stdio.h>
#include <conio.h>

int len(char *);
void rev(char *);

int main()
{
    char s[20];
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
    // puts(*s); here puts do not work properly because *s is only address of the first byte (and bytes size for complete access of the byte).
    
    // we cant access the whole array in other function we only access the first byte ofthe array

    char c[20]=*s;
    int i=(len(c)/2)-1;
    char temp;
    for(;i>=0;i--)
    {
        temp=*(s+i);
        *(s+i)=*(s+( len(s)-1-i ));
        *(s+( len(s)-1-i ))=temp;
    }

}