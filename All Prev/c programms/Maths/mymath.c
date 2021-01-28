#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int ang;
    double rd,sn,cs,tn;
    printf("Enter the angle in degrees : \n");
    scanf("%d",&ang);
    rd=(22.0/7)/180 *ang;
    printf("Enter the angle in Radian : %.2f\n",rd);
    sn=sin(rd);
    cs=cos(rd);
    tn=tan(rd);
    printf("The sin of %d is : %.3f\n",ang,sn);
    printf("The cos of %d is : %.3f\n",ang,cs);
    printf("The tan of %d is : %.3f\n",ang,tn);
    
    
    return 0;
}