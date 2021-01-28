#include <stdio.h>
#include <conio.h>
int main()
{
    int curr=0,prev=0,pprev=0;
    int n=0;int count=0;
    printf("Enter the total number of numbers YOu want to entered : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&curr);
        if(curr<=0)
            continue;
        if(count==0)
        {
            pprev=curr;
            count=1;
        }
        else
        {
            if(count==1)
            {
                prev=curr;
                count=2;
            }
            else
            {
                if(curr*curr==prev*prev+pprev*pprev || pprev*pprev==prev*prev+curr*curr || prev*prev==curr*curr+pprev*pprev)
                    printf("%d %d %d\n",pprev,prev,curr);
                pprev=prev;
                prev=curr;
            }
            
        }
    }
    return 0;
}