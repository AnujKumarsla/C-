#include<stdio.h>
#include<conio.h>
int main()
{
    int amt, one, two, five, ten, fifty, hund;
    printf("Enter Your total amout to calculate : ");
    scanf("%d",&amt);
    if(hund=amt/100)
    {
        printf(" %d Hundred notes\n",hund) ;
        amt%=100;
    }
   
    if(fifty=amt/50)
    {
        printf(" %d Fifty notes\n",fifty) ;
        amt%=50;
    }
   
    if(ten=amt/10)
    {
        printf(" %d Ten notes\n",ten) ;
        amt%=10;
    }
   
    if(five=amt/5)
    {
        printf(" %d Five notes\n",five) ;
        amt%=5;
    }
   
    if(two=amt/2)
    {
        printf(" %d Two notes\n",two) ;
        amt%=2;
    }
   
    if(one=amt/1)
    {
        printf(" %d One notes\n",one) ;
        amt%=1;
    }
   
    getch();
    return 0;
}