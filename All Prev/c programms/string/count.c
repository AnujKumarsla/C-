#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

char * rmSp(char *s)
{
    char *p;
    int i=0,j=0;
    p=malloc(strlen(s)+1);
    while(*(s+i)!='\0')
    {
        // Remove Extra spaces
        while (*(s+i)==' ')
            i++; 
        // check for SPACE and  NULL CHARACTER
        while(*(s+i)!=' ' && *(s+i)!='\0')
        {
            *(p+j) = *(s+i);
            i++;j++;
        } 
        // check whether it is comming out due to LAST CHARACTER and last character of p is SPACE
        if(*(s+i)=='\0'  &&  *(p+j-1)==' ')
            j--;
        // add SINGLE SPACE OR if its last character NULL CHARACTER WILL BE ADDED
        *(p+j) = *(s+i);
        j++;
    }
    return p;
}


int wrdCounter(char *s)
{
    int count=0,i=0;
    while(*(s+i)){
        if(*(s+i)==' ')
        count++;
        i++;
    }
    return ++count;
}
int main()
{
    char s[50];
    printf("Enter the string : ");
    gets(s);
    strcpy(s,rmSp(s));
    printf("Total number of words is %d",wrdCounter(s));
    return 0;
}