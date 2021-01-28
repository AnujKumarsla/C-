#include <stdio.h>
#include <conio.h>
//Set of related data.
struct date
{
    int d,m,y;
};
int main()
{
    struct date d1;
    printf("Enter the date in dd/mm/yy format : ");
    scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
    printf("Date is accepted.\n");
    printf("date is %d/%d/%d",d1.d,d1.m,d1.y);
}