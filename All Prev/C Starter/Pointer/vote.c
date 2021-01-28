#include <stdio.h>
#include <conio.h>

int main()
{
    int age;
    char vote;
    printf("You want to vote :");
    scanf("%c",&vote);
    if(vote=='y'|| vote=='Y')
    {
        printf("Enter your age : ");
        scanf("%d",&age);
        if(age>18)
            printf("you are eligible for voting.");
        else
            printf("you are not eligible for voting.");
    }
    else
    {
        printf("better luck next time.");
    }
    
}