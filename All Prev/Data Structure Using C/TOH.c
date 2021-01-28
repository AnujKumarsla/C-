#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int TOH(int n,char start,char end,char aux);
int main()
{
    int n;
    char start='A',end='c',aux='B';
    printf("Enter the number of plates you want to move : ");
    scanf("%d",&n);
    int x=TOH(n,start,end,aux);
    printf("%dsteps To complete this task",x);
    return 0;
}

int TOH(int n,char start,char end,char aux)
{
    static int x=0;
    if(n==1)
    {
        printf("%d. Move disk %d | %c to %c\n",++x,n,start,end);
        return x;
    }

    TOH(n-1,start,aux,end);
    printf("%d. Move disk %d | %c to %c\n",++x,n,start,end);
    TOH(n-1,aux,end,start);
    return x;
}