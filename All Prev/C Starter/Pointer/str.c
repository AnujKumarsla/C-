#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char* rev(char *);
int len(char *);
int main()
{
    //firstcode();
    printf("\n%d",len("Computer"));
    printf("\n%s",rev("Computer"));
    printf("hello\n");
    return 0;
}

char* rev(char *x)
{
    int i,l,j;
    char temp;
    for(i=0;*(x+i)!='\0';i++);
    for(j=0;j<i/2;j++)
    {
        temp=*(x+j);
        *(x+j)=*(x+l-1-j);
        *(x+l-1-j)=temp;
    }
    return x;
}
int len(char *x)
{
    int i;
    for(i=0;*(x+i)!='\0';i++);
    return i;
}
