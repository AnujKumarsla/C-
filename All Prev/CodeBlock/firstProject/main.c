#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char* rev(char *);
int len(char *);
int main()
{
    //firstcode();
    printf("\n%d\n",len("Computer"));

    printf("hello\n");
    puts(rev("computer"));

    return 0;
}

char* rev(char *x)
{
    int i,j;
    char temp;
    for(i=0;*(x+i)!='\0';i++);
    for(j=0;j<i/2;j++)
    {
        temp=*(x+j);
        *(x+j)=*(x+i-1-j);
        *(x+i-1-j)=temp;
    }
    return (x);
}
int len(char *x)
{
    int i;
    for(i=0;*(x+i)!='\0';i++);
    return i;
}
