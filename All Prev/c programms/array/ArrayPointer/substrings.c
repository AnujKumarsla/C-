#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int len,i,j,k=0,nsubstr;
    char st[100],**substrs;
    printf("Enter the strings : ");
    gets(st);
    len=strlen(st);
    nsubstr=(len*(len+1))/2;
    substrs=(char**)malloc(sizeof(char *)*nsubstr);
    for(i=0;i<nsubstr;i++)
        substrs[i]=(char *)malloc(sizeof(char *)*(len+1));
    
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            strncpy(substrs[k],st+i,j-i+1);
            k++;
        }
    }
    
    for(i=0;i<k;i++)
        printf("%s\n",substrs[i]);
    for(i=0;i<k;i++)
        free(substrs[i]);
    free(substrs);
    return 0;
}