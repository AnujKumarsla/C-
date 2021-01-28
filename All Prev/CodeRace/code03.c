#include <stdio.h>
#include <string.h>

int main()
{
    char ch,s[15],sen[50];
    /* scanf("%c",&ch);
    scanf("%s",s);
    gets(sen);*/
    scanf("%c",&ch);//fflush(stdin);
    scanf("%s", s);fflush(stdin);//scanf("%[^\n]s", str);
    scanf("%[^\n]%*c", sen);//scanf("\n");
    printf("%c\n%s\n%s",ch,s,sen);
    return 0; 
    

}

int main()
{
    char ch,s[15],sen[50];
    scanf("%c",&ch);
    scanf("%s", s);fflush(stdin);
    scanf("%[^\n]%*c", sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0; 
    

}