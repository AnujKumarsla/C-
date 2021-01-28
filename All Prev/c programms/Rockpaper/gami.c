#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int random(int n)
{
    srand(time(NULL));
    return rand()%n;
}

int win(int a,int b)
{
    if(a==0)
        if(b==1)
            return 2;
        else if(b==2)
            return 1;
        else 
            return 0;
    if(a==1)
        if(b==0)
            return 1;
        else if(b==2)
            return 2;
        else 
            return 0;
    if(a==2)
        if(b==0)
            return 2;
        else if(b==1)
            return 1;
        else 
            return 0;
    return 3;
}
int main()
{
    char nm[25];
    int p1,p2,p,s1=0,s2=0;
    char item[][15]={"Rock","Paper","Scissors"};
    printf("Enter Your Player Name : ");
    gets(nm);
    printf("%s,Your Wellcome in our Game :\n Lets begin the game\n",nm);
    printf("\t Rules of the game You can choose options from only Rock ,Paper ,Scissors\nFor Rock press 0,\nFor Paper press 1,\nFor Scissors press 2\n");

    for(int i=0;i<3;i++)
    {
        printf("Player 1 : ");
        scanf("%d",&p1);
        p2=random(3);
        if(p1<3)
            printf("%s Vs %s\n",item[p1],item[p2]);
        p=win(p1,p2);
        if(p==1)
        {
            printf("%s is the winner of this Round.\n",nm);
            s1++;
        }
        else if(p==2)
        {
            printf("Computer is the winner of this Round.\n");
            s2++;
        }
        else if(p==3)
        {
            printf("You choose wrong option.\nSo replay this round\n");
            --i;
        }
        else
        {
            printf("Match is drawn.\nSo replay this round\n");
            --i;
        }
        printf("Current Score is Player 1 : %d Player 2 : %d\n===========\n",s1,s2);
    }
    
    if(s1<s2)
        printf("Computer is the win of this game By %d Points.\n",s2-s1);
    else
        printf("%s is the win of this game By %d Points.\n",nm,s1-s2);
    

    return 0;
}
/*
char * obj(int n)
{
    switch (n)
    {
    case 0 : return "Rock";
    case 1 : return "Paper";
    case 2 : return "Scissors";
    default: return "You Entered Wrong choice";
    }
}
*/