#include <stdio.h>
#include <conio.h>
int main()
{
    int bsal;
    float dr,hr,gross;
    printf("Enter the Basic Pay :  ");
    scanf("%d",&bsal);
    dr=40*bsal/100.0;
    hr=20*bsal/100.0;
    gross=bsal+dr+hr;
    printf("The Basic Pay is : %d\n",bsal);
    printf("The Dearness Allowance is :%f\n",dr);
    printf("The  House rent Allowance is : %f\n",hr);
    printf("The Gross Pay is : %f\n",gross);
    getch();
    return 0;
}