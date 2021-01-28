#include<stdio.h>
#include<conio.h>
int main()
{
int a,b=0;
clrscr();
printf("give the five digit number : ");
scanf("%d",&a);
for(int i=0;i<5;i++)
{
b+=a%10;
a/=10;
}
printf("the sum of all digit present in the given number : %d",b);
getch();
return 0;
}