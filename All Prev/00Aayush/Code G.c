#include<stdio.h>
#include<conio.h>

int main(){
    long int a=0;
    int sum=0, i;
    clrscr();
    printf("Enter the five digit no. : ");
    scanf("%d", &a);
    for(i=0;i<5;i++){
        sum+=a%10;
        a=a/10;
    }
    printf("The sum of its digit is : %d ",sum);
    getch();
    return 0;
}