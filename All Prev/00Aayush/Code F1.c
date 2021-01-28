#include<stdio.h>
#include<conio.h>

int main(){
    int a,b;
    clrscr();
    printf("Enter the no. in a : ");
    scanf("%d",&a);
    printf("Enter the no. in b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a : %d\nb : %d", a,b);
    getch();
    return 0;
}