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
    fp=fopen("mytext.txt","w");
    printf("Hello, world!\n");
    for(int i=0;i<3;i++)
    {
        printf("Enter the name of the book : ");
        fflush(stdin);
        gets(b1.nm);
        printf("Enter the price of the book : ");
        scanf("%d",&b1.mrp);
        printf("Enter the id of the book : ");
        scanf("%d",&b1.id);
        int n=6;
        fwrite(&b1,(int )ceil(sizeof(b1)/n),n,fp);

    }
    printf("press any key to sava data ");
    getch();
    fclose(fp);
    return 0;
}