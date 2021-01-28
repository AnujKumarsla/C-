#include<stdio.h>
#include<conio.h>
int main()
{
    int w,x,y,z;
    w=sizeof(int);
    x=sizeof(double);
    y=sizeof(float);
    z=sizeof(char);
    printf("%d %d %d %d ",w,x,y,z);
    return 0;
}