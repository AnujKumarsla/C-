#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
// ==========================================================================================================
void step3(int *Loc,int right,int left,int a[]);
void step2(int *Loc,int right,int left,int a[]);
void step2(int *Loc,int right,int left,int a[])
{
    int temp;
    //Right to Left
    while(a[*Loc]<=a[right] && *Loc!=right)
        right--;
    if(*Loc==right)
        return;
    if(a[*Loc]>a[right])
    {
        temp=a[*Loc];
        a[*Loc]=a[right];
        a[right]=temp;
        *Loc=right;
    }
    step3(Loc,right,left,a);
}
void step3(int *Loc,int right,int left,int a[])
{
    int temp;
    //Left to right
    while(a[*Loc]>=a[left] && *Loc!=left)
        left++;
    if(*Loc==left)
        return;
    if(a[*Loc]<a[left])
    {
        temp=a[*Loc];
        a[*Loc]=a[left];
        a[left]=temp;
        *Loc=left;
    }
    step2(Loc,right,left,a);
}
void quick(int a[],int n,int Beg,int End,int *Loc)
{
    int left=Beg,right=End,temp;
    *Loc=Beg;
    step2(Loc,right,left,a);
}
// ==========================================================================================================
void quickSort(int a[],int n)
{
    int Beg,End,Loc;
    int lower[10],upper[10];
    //stack lower,upper
    int top=-1;
    if(n>1)
    {
        top=top+1;
        lower[top]=0;
        upper[top]=n-1;
    }
    while(top!=-1)
    {
        //Pop sublist from the stack 
        Beg=lower[top];
        End=upper[top];
        top--;
        //Call quick sort to each pair of sublist
        quick(a,n,Beg,End,&Loc);
        //Push left sublist onto the stack
        if(Beg<Loc-1)
        {
            top++;
            lower[top]=Beg;
            upper[top]=Loc-1;
        }
        //Push the right subtree onto the stack
        if(Loc+1<End)
        {
            top++;
            lower[top]=Loc+1;
            upper[top]=End;
        }
    }
}
int main()
{
    int a[10]={5,9,3,4,2,8,1,7,6,0},n=10;
    printf("Hello, world!\n");

    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    quickSort(a,n);
    printf("sorted array : \n");
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    
    return 0;
}

/*
void quick(int a[],int n,int Beg,int End,int *Loc)
{
    int left=Beg,right=End,temp;
    *Loc=Beg;
    step2:
        //Right to Left
        while(a[*Loc]<=a[right] && *Loc!=right)
            right--;
        if(*Loc==right)
            return;
        if(a[*Loc]>a[right])
        {
            temp=a[*Loc];
            a[*Loc]=a[right];
            a[right]=temp;
            *Loc=right;
        }
        goto step3;
    step3:
        //Left to right
        while(a[*Loc]>=a[left] && *Loc!=left)
            left++;
        if(*Loc==left)
            return;
        if(a[*Loc]<a[left])
        {
            temp=a[*Loc];
            a[*Loc]=a[left];
            a[left]=temp;
            *Loc=left;
        }
        goto step2;
}
*/
// ==================================================================
/*
void step2(int *Loc,int *R,int *L,int a[])
{
    int temp;
    int right=(*R);
    //Right to Left
    while(a[*Loc]<=a[right] && *Loc!=right)
        right--;
    if(*Loc==right)
        return;
    if(a[*Loc]>a[right])
    {
        temp=a[*Loc];
        a[*Loc]=a[right];
        a[right]=temp;
        *Loc=right;
    }
    step3(Loc,R,L,a);
}
void step3(int *Loc,int *R,int *L,int a[])
{
    int temp;
    int left=(*L);
    //Left to right
    while(a[*Loc]>=a[left] && *Loc!=left)
        left++;
    if(*Loc==left)
        return;
    if(a[*Loc]<a[left])
    {
        temp=a[*Loc];
        a[*Loc]=a[left];
        a[left]=temp;
        *Loc=left;
    }
    step2(Loc,R,L,a);
}
*/