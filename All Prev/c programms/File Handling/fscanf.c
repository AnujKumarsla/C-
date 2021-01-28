#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c;
    FILE *file;
    file=fopen("my.txt","r");
    fscanf(file,"%d%d%d",&a,&b,&c);

    printf("The sum of %d %d %d is %d\n",a,b,c,a+b+c);

    printf("press key to close the file");
    getch();
    fclose(file);
    return 0;
}