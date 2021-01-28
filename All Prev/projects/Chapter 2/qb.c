#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num,a,b=0;
    printf("Enter the Five digit number : ");
    scanf("%d",&num);
    /*
    for(int i=0;i<5;i++)
    {
        a=num%10;
        num/=10;
        b=b+(a*pow(10,i));
    }*/
    for(int i=5;i>0;i--)
    {
        a=num%10;
        num/=10;
        b=b+(a*pow(10,i-1));
    }

    printf("The reversed number is :\n    %d",++b);
}