#include <stdio.h>
#include <conio.h>

int main()
{
    int yrs;
    printf("Enter the year : ");
    scanf("%d",&yrs);
    if(yrs%4==0)
        printf("year is leap year");
    else
        printf("year is not a leap year");
    
    printf("\nhello world");
    return 0;
}
