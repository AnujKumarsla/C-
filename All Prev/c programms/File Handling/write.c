#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    FILE *fp;
    fp=fopen("mytext.txt","w");
    printf("Enter the text you want to save in the file : ");
    gets(s);
    fputs(s,fp);
    printf("\nPress any key to save data into the file.");
    getch();
    fclose(fp);
    return 0;
}