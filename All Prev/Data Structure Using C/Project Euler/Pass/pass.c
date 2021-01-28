#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void pass(char a[],int size)
{
    // char a[50];
    int x;
    for(int i=0;i<size;i++)
    {
        switch (a[i])
        {
        case 'a':
        case 'A':
            a[i]='4';
            break;
        case 'b':
            a[i]='6';
            break;
        case 'B':
            a[i]='8';
            break;
        // case 'd':
        // case 'D':
        //     a[i]='6';
        //     break;
        case 'e':
        case 'E':
            a[i]='3';
            break;
        case 'g':
        case 'G':
            a[i]='6';
            break;
        // case 'h':
        // case 'H':
        //     a[i]='4';
        //     break;
        // case 'l':
        // case 'L':
        case 'i':
        case 'I':
            a[i]='1';
            break;
        case 'o':
        case 'O':
            a[i]='0';
            break;
        case 'p':
        case 'P':
            a[i]='9';
            break;
        case 'r':
        case 'R':
            a[i]='2';
            break;
        case 's':
        case 'S':
            a[i]='5';
            break;
        case 't':
        case 'T':
            a[i]='7';
            break;
        
        default:
            x=(int)a[i];
            a[i]=a[i];
            break;
        }
    }
}
void upp(char s[],int size)
{
    int x;
    for(int i=0;i<size;i++)
    {
        x=(int)s[i];
        if(x>=97 && x<=122)
        {
            s[i]=(char)(x-32);
        }
    }
}
int main()
{
    char s[100];
    printf("Hello, world!\n");
    printf("Enter the word : ");
    gets(s);
    upp(s,100);
    printf("The Uppercase is %s\n",s);
    pass(s,100);
    printf("The password is :%s\n",s);
    
    return 0;
}