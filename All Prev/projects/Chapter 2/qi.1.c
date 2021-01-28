#include<stdio.h>
#include<conio.h>
int main()
{
    int amt, one, two, five, ten, fifty, hund;
    printf("Enter Your total amout to calculate : ");
    scanf("%d",&amt);
    hund=amt/100;
    if(hund)
    {
        printf(" %d Hundred notes\n",hund) ;
        amt%=100;
    }
   fifty=amt/50;
    if(fifty)
    {
        printf(" %d Fifty notes\n",fifty) ;
        amt%=50;
    }
   ten=amt/10;
    if(ten)
    {
        printf(" %d Ten notes\n",ten) ;
        amt%=10;
    }
   five=amt/5;
    if(five)
    {
        printf(" %d Five notes\n",five) ;
        amt%=5;
    }
   two=amt/2;
    if(two)
    {
        printf(" %d Two notes\n",two) ;
        amt%=2;
    }
   one=amt/1;
    if(one)
    {
        printf(" %d One notes\n",one) ;
        amt%=1;
    }
   
    getch();
    return 0;
}