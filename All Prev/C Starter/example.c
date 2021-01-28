#include <stdio.h>
#include <conio.h>


// extern int i;
int i = 10;
char a;


void test()
{
    i++;
    printf("test value of i : %d",i);    
}
int main()
{
    extern int i;
    // i=11;
    // int i=5;
    printf("%d\n",i);
    test();
    // getch();
    scanf("%c",&a);
    return 0;
}