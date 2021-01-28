#include <stdio.h>
#include <conio.h>

void reverse(char *);

int main()
{
    char s[20];
    gets(s);
    reverse(s);
    // printf("3");
    puts(s);
    // printf("4");
    
    return 0;
}
void reverse(char *x)
{
    int i,j;char temp;
    for(i=0;*(x+i)!='\0';i++);
    i-=1;
    // printf("1");
    for(j=0;j<=i/2;j++)
    {
        temp=*(x+j);
        *(x+j)=*(x+(i-j));
        *(x+(i-j))=temp;
        // printf("2 %d %d\n",i,j);

    }

}