/*  
C program to find sum of following series
 1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num,i,odd=1; //i is number of trms 
    float sum;
    printf("Enter the nmber : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("\n%d",odd);
        sum+=1.0*odd*odd/(odd*odd*odd);
        odd+=2;
    }
    printf("the sum of the total termsis : %f",sum);

    return 0;
}