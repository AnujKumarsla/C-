#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[10],s2[10],s3[10],s4[10],s[10];
    printf("Hello, world!\n");
    // scanf("%s",s);
    gets(s);
    printf("Hello, world!1\n");
    gets(s1);
    // scanf("%s",s1);
    printf("Hello, world!2\n");
    // gets(s2);
    scanf("%s",s2);
    printf("Hello, world3\n");
    // gets(s3);
    scanf("%s",s3);
    printf("Hello, world4\n");
    gets(s4);
    // scanf("%s",s4);
    printf("s=%s s1=%s s2=%s s3=%s s4=%s\n",s,s1,s2,s3,s4);
    // scanf("%s",s5);
    
    return 0;
}