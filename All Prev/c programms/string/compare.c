#include <stdio.h>
#include <conio.h>

int str_comp(char s1[],char s2[])
{
    int i=0;
    while(s1[i]==s2[i])
    {
        if(s1[i]=='\0' || s2[i]=='\0')
            return 0;
        i++;
    }
    if(s1[i]==s2[i])
        return 0;
    else if(s1[i]>s2[i])
        return (s1[i]-s2[i]);
    else
        return -(s2[i]-s1[i]);
}

int main()
{
    char s1[20],s2[20];
    printf("Enter the two strings : \n");
    gets(s1);
    gets(s2);
    printf("The given two strings are compared\nThe result is %d",str_comp(s1,s2));
    return 0;
}