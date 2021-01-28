/*  
C program to find sum of following series
* 1.2/3 + 2.3/4 + 3.4/5 + 4.5/6 + ... + n(n +1)/(n+2)
*/

#include <stdio.h>
#include <math.h>

// main function
int main()
{
	int i,N,x;
	float sum;
	
	/*read value of N*/
	printf("Enter total number of terms: ");
	scanf("%d",&N);
	
	/*set sum by 0*/
	sum=0.0f;
	
	/*calculate sum of the series*/
	for(i=1;i<=N;i++)
	{
		sum = sum + ( (float)(N)*(N+1) / (float)(N+2));
	}
	
	/*print the sum*/
	printf("Sum of the series is: %f\n",sum);
	
	return 0;
}
