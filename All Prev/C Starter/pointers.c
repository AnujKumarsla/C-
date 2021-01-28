#include<stdio.h>
#include<conio.h>
int main()
{
    int x=5, *j;
    j=&x;
    printf("%d\t%u \n",x,j);
    printf("%u\t%u \n",&x,&j);
    printf("%d\t%d \n",*&x,*&j);
    printf("%d \n",&*&j);
    getch();
    return 0;
}
