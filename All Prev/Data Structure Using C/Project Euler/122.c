#include<stdio.h>

int main()
{
    int count=0;
    long long int sum=0,num=0,i=0;
    printf("helo world!");
    while(count<500)
    {
        count=0;
        num++;
        sum+=num;
        for(i=1;i<sum;i++)
        {
            if(sum%i==0)
            {
                count++;
                // printf("%d ",i);
            }
        }

    }
        // printf("\tnum=%d, sum=%ld, count = %d\n",num,sum,count);
        printf("num %d\n",num);
        printf("sum %d\n",sum);
        printf("count %d\n",count);
    return 0;
}