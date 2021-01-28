#include<stdio.h>
#include<conio.h>
void get(int *);
void out(int *);
void sort(int *);
int main()
{
    int a[5];
    get(a);
    printf("=========================\n\n");
    out(a);
    printf("=========================\n\n");
    sort(a);
    out(a);
    getch();
    return 0;
}
\
void get(int *p){
   for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    } 
}

void out(int *p){
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
}

void sort(int *x)
{
    int temp,j,i,sm;
    j=5;
    for(j=5-1;j>=0;j--)
    {   //{1,2,3,4,5}
        // 0 1 2 3 4
        sm=*(x+j);
        for(i=0;i<=j;i++)
        {
            if(sm>*(x+i))
                sm=*(x+i);
        }
        if(sm!=*(x+j))
        {
            temp=*(x+j);
            *(x+j)=sm;
            *(x+i)=temp;
        }
    }
}