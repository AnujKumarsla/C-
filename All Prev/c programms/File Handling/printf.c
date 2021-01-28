#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char nm[15],lv[50];
    fp=fopen("mytext.txt","w");
    printf("Hello, world!\n");

    printf("Enter the your name : ");
    gets(nm);
    
    printf("Enter the your love name : ");
    gets(lv);

    fprintf(fp,"%s loves %s",nm,lv);
    fclose(fp);
    
    return 0;
}