#include<stdio.h>
#include<conio.h>
void sort(int *x,int y);
int main()
{
    int a[]={3,1,2,6,4},temp,j,i,sm;
    j=5;
    /*for(j=5-1;j>=0;j--)
    {
        sm=j;
        for(i=0;i<=j;i++)
        {
            if(a[sm]>a[i])
                sm=i;
        }
        if(sm!=j)
        {
            temp=a[j];
            a[j]=a[sm];
            a[sm]=temp;
        }
    }*/
    sort(a,5);
    for(i=0;i<5;i++)
        printf("%d \n",a[i]);
    getch();
    return 0;
}
void sort(int *x,int y)
{
    int sm,j,i,temp,ti;
    for(j=5-1;j>=0;j--)
    {
        sm=*(x+j);
        for(i=0;i<j;i++)
        {
            if(sm>*(x+i))
                sm=*(x+i);
                ti=i;
        }
        if(sm!=*(x+j))
        {
            temp=*(x+j);
            *(x+j)=*(x+ti);
            *(x+ti)=temp;
        }
    }
}