// Programme for calculating the area and the perimeter of the rectangle and the circle
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int rar,rl,rb,cr,car,ccr,rpr;
    // Rectangle
    printf("Enter the length of the rectangle : ");
    scanf("%d",&rl);
    printf("Enter the Breadth of the rectangle : ");
    scanf("%d",&rb);
    rpr=(rl+rb)*2;
    rar=rl*rb;
    printf("The area and Perimeter of the Rectangle is : %d and %d\n",rar,rpr);
    // ====================================================================================
    // Circle
    printf("Enter the Radius of the Circle : ");
    scanf("%d",&cr);
    ccr=2*22/7.0*cr;
    car=22/7.0*pow(cr,2);
    printf("The area and Circumference of the Circle is : %d and %d\n",car,ccr);
    getch();
    return 0;

}