// Programme to convert the celcius to ferhenite and kelvin
// let us take the formula f=c/2+139 k=c-270

#include<stdio.h>
#include<conio.h>
int main()
{
    int c,f,k;
    printf("Enter the Temprature in Celcius : ");
    scanf("%d",&c);
    f=c/2+139;
    k=c-270;
    printf("The temprature in Ferhenite is %d \nThe temprature in Kelvin is %d ",f,k);
    getch();
    return 0;
}