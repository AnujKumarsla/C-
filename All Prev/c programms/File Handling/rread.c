#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("mytext.txt","r");
    if(fp==NULL)
    {
        printf("The file is not found\n");
        exit(0);
    }
    printf("File text is here -\n\n");
    ch=fgetc(fp);
    while (!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    
    return 0;
}