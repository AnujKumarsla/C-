#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct book
{
    char nm[16];
    int mrp;
    int id;
}b1;
int main()
{
    FILE *fp;
    printf("Press any key to open the file ");
    getch();
    fp=fopen("mytext.txt","rb");
    if(!fp)
    {
        printf("This file is not found");
        exit(0);
    }
    
    int n=6;
    while(fread(&b1,(int )ceil(sizeof(b1)/n),n,fp))
    {
        printf("\nBook : %s\nPrice : %d\nBook Id : %d\n",b1.nm,b1.mrp,b1.id);
    }
    printf("press any key to close this file ");
    getch();
    fclose(fp);
    return 0;
}