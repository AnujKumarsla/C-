#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c,d,e;
// clrscr();
printf("give the three sides of the triangle : ");
scanf("%d %d %d",&a,&b,&c);
d=(a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a);
d=sqrt(d);
printf("The area of the triangle is : %d",d);
getch();
return 0;
}
