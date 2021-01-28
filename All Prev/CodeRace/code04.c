#include <stdio.h>

int main()
{
	int a,b;float q,r;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&q,&r);
    printf("%d %d\n",a+b,a-b);
    printf("%.1f %.1f",q+r,q-r);
    return 0;
}