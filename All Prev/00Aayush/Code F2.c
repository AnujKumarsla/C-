#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c;
    clrscr();
    printf("Enter the no. in a : ");
    scanf("%d",&a);
    printf("Enter the no. in b: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a : %d\nb : %d", a,b);
    getch();
    return 0;
}