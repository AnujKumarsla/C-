#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char s[6];
    FILE *fp;
    fp=fopen("mytext.txt","r");
    // fopen return null value if file is not found
    if(!fp)
    {
        printf("The file is not found in this directory\n");
        exit(0);
    }
    while (fgets(s,6,fp))
       printf("%s",s);
    fclose(fp);
    
    return 0;
}