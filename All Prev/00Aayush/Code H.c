#include<stdio.h>
#include<conio.h>

int main(){
    long int a=0, b=0;
    int i;
    clrscr();
    printf("Enter the five digit no. : ");
    scanf("%d", &a);
    for(i=0;i<5;i++){
        b= b*10 + a%10;
        a=a/10;
    }
    printf("The reverse of its digit is : %d ",b);
    getch();
    return 0;
}