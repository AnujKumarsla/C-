#include <stdio.h>
#include <conio.h>
//check pythagorean

// int istriplet(int a,int b,int c)
// {
//     if(a<b)
//     {
//         if(b<c)
//         {
//             if(c*c==b*b+a*a)
//                 return 1;
//         }
//         else//(b*b==c*c+a*a)
//             return 1;
//     }
// }
int main()
{
    int a[15];
    int count=0;
    int curr=0,prev=0,pprev=0;
    printf("Enter the numbers : ");
    for(int i=0;i<15;i++)
        scanf("%d",&a[i]);
    
    for(int i=0;i<15;i++)
    {
        curr=a[i];
        if(curr>0)
        {
            if(count==1)
                if(curr*curr==prev*prev+pprev*pprev)
                    printf("%d %d %d\n",pprev,prev,curr);
            pprev=prev;
            prev=curr;
            count++;
        }
    }
    return 0;
}