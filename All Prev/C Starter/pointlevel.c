#include<stdio.h>
#include<conio.h>

void main()
{
    int x=5 ,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    printf("%d %d %d %d\n",x,p,q,r);
    printf("%d %d %d %d\n",&x,&p,&q,&r);
    printf("%d %d %d %d\n",*&x,*&p,*&q,*&r);
    printf("%d %d %d %d\n",*&x,**&p,**&q,**&r);
    printf("%d %d %d %d\n",*&x,**&p,***&q,***&r);
    printf("%d %d %d %d\n",*&x,**&p,***&q,****&r);
    
    printf("%d %d %d %d\n",*&x,**&p,***&q,****&r);


    printf("%d %d %d %d\n",x,*p,**q,***r);
    
}