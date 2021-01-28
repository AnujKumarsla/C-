#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num,a=0;
    printf("Enter the Five digit number : ");
    scanf("%d",&num);
    for(int i=0;i<5;i++)
    {
        a+=num%10;
        num/=10;
    }
    printf("The sum of all digits of the given number is :\n    %d",a);
}