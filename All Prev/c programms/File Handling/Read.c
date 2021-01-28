#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ch;
    FILE *fp;
    printf("Hello, world!\n");
    fp=fopen("mytext.txt","r");
    if(fp==NULL)
    {
        printf("The file is not found\n");
        exit(1);
    }
    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    return 0;
}