#include<stdio.h>
#include<conio.h>
int main()
{
    int p,pl,pb;
    p=0;
    pl=1189;
    pb=841;
    for(int i=0;i<9;i++)
    {
        printf("Dimension of A%dPaper is %d X %d\n",i,pl,pb);
        if(pl>pb)
        {
            p=pb;
            pb=pl/2;
            pl=p;
        }
        else
        {
            p=pl;
            pl=pb/2;
            pb=p;
        }
        
    }
}