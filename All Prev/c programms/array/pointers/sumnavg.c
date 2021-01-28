#include <stdio.h>
#include <conio.h>
void cal(int *num,int n,float *sum,float *avg,float *div);
int main()
{
    int num[5],x;
    float sum,avg,div;
    printf("Enter %f\n",(float)5);
    printf("Enter the list of numbers : \n");
    for(int x=0;x<5;x++)
        scanf("%d",&num[x]);
    cal(&num[0],5,&sum,&avg,&div);
    printf("Total sum is %.2f\nAverage is %.2f\nStandard mean diviation is %.2f",sum,avg,div);
    return 0;
}

void cal(int *num,int n,float *sum,float *avg,float *div)
{
    int total=0;
    for(int x=0;x<n;x++)
    {
        total += *(num+x);
        printf("the num vlue is %d\n",*(num+x));
        printf("the sum vlue is %d\n",total);
    }
    *avg = (float) total/n;
    *sum = (float)total;
    *div=0;
}