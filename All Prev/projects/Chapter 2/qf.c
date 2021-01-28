#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int t,v,wcf;
    printf("Wind Chill factor Calculator\n");
    printf("Enter the temp : ");
    scanf("%d",&t);
    printf("Enter the Wind Velocity : ");
    scanf("%d",&v);
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("The wind chill factor is : %d",wcf);
    getch();
    return 0;
}