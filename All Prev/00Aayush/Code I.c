#include<stdio.h>
#include<conio.h>

int main(){
    int a=0, b=0;
    int i;
    clrscr();
    printf("Enter the four digit no. : ");
    scanf("%d", &a);
    for(i=0;i<4;i++){
        if(i==0 || i==3 )
            b+=a%10;
        a=a/10;
    }
    printf("The reverse of its digit is : %d ",b);
    getch();
    return 0;
}