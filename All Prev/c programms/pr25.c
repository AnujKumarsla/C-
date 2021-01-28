
#include <stdio.h>

int sum(int a, int b)  
{ 
    char *p = (char *) a; 
    return (int)&p[b]; 
} 

int main()
{
	int a,b;
	float total;
	printf("Enter total number of terms: ");
	scanf("%d",&a);
	printf("Enter total number of terms: ");
	scanf("%d",&b);
	total=sum(a,b);
	printf("Sum of the series is: %.2f\n",total);
	
	return 0;
}