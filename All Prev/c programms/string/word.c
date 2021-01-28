#include <stdio.h>
#include <conio.h>
#include <string.h>
int isChar(char a);
int main()
{
    int count=0,l;
    char str[100],word[30][15],a;
    printf("Enter the string : ");
    gets(str);
    l=strlen(str);
    for(int i=0;i<l;i++)
        if(str[i]==' ' && isChar(str[i-1]))
            count++;
    
    if(str[l-1]==' ')
            count--;
    count++;
    printf("The given string has %d words",count);
    
    // printf("Enter the character to check : ");
    // scanf("%c",&a);
    // if(isChar(a))
    //     printf("It is a alphabet character");
    // else 
    //     printf("It is not a alphabet character.");
    // return 0;
}
int isChar(char a)
{
    if( (a>= 65 && a<=90) || (a>=97 && a<=122) )
        return 1;
    return 0;
}