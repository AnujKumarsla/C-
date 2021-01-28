#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;

    printf("Enter the alphabet character : ");
    scanf("%c",&ch);

    if(ch=='a' && ch=='A')
        printf("The character is vowel\n");
    else if(ch=='e' && ch=='E')
        printf("The character is vowel\n");
    else if(ch=='i' && ch=='I')
        printf("The character is vowel\n");
    else if(ch=='o' && ch=='O')
        printf("The character is vowel\n");
    else if(ch=='u' && ch=='U')
        printf("The character is vowel\n");
    else
        printf("The character is consonant\n");
}