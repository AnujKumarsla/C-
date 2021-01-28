#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    FILE *fp;
    fp=fopen("my.txt","r+");
    if(fp==NULL)
    {
        printf("File is not found");
        exit(1);
    }
    char s[100]="Anuj Kumarsla ";
    for(int i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    printf("Press the key to save the file\n");
    getch();
    fclose(fp);
    printf("File is created");
    return 0;
}