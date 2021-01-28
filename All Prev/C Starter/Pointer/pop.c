#include <stdio.h>
#include <conio.h>

void sort(int *,int i);
void get(int *,int i);
void out(int *,int i);

int main()
{
    int a[5];
    get(a,5);
    printf("Row array\n");
    out(a,5);
    sort(a,4);
    printf("\nSorted array\n");
    out(a,5);
}
void sort(int *x,int i)
{
    int round, temp, j;
    for(round=1;round<=i-1;round++)
    {
        for(j=0;j<=i-1-round;j++)
        {
            if(*(x+j)>*(x+j+1))
            {
                temp=*(x+j);
                *(x+j)=*(x+j+1);
                *(x+j+1)=temp;
            }
        }
    }
}
void get(int *s,int i)
{
    for(int j=0;j<i;j++)
    {
        scanf("%d",(s+j));
    }
}
void out(int *x,int i)
{
    for(int j=0;j<i;j++)
    {
        printf("%d ",*(x+j));
    }
}