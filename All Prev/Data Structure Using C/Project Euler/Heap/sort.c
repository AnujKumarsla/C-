#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

// Prototype Declaration
struct heap * createHeap(int cap);
void buildHeap(struct heap *h,int a[],int n);
void ResizeHeap(struct heap *h);
void PercolateDown(struct heap *h,int i);
int LeftChild(struct heap *h,int i);
int RightChild(struct heap *h,int i);
void HeapSort(int a[],int n);
//======================================================

struct heap{
    int count;
    int *array;
    int cap;
};
struct heap * createHeap(int cap)
{
    struct heap *h;
    h=(struct heap *)malloc(sizeof(struct heap));
    if(h==NULL)
    {
        printf("Memory Eror!");
        return 0;
    }
    h->count=0;
    h->cap=cap;
    h->array=(int *)malloc(sizeof(int)*cap);
    if(h==NULL)
    {
        printf("Memory Eror!");
        return 0;
    }

    return h;
}
void buildHeap(struct heap *h,int a[],int n)
{
    int i;
    if(h==NULL)
        return;
    while(n>(h->cap))
        ResizeHeap(h);
    for(i=0;i<n;i++)
        h->array[i]=a[i];
    h->count=n;
    for(i=(n-1)/2;i>=0;i--)
        PercolateDown(h,i); 
}
void ResizeHeap(struct heap *h)
{
    int i;
    int *array_old=h->array;
    h->array=(int *)malloc(sizeof(int)*h->cap*2);
    if(h->array==NULL)
    {
        printf("Memory !");
        return;
    }
    for(i=0;i<h->cap;i++)
        h->array[i]=array_old[i];
    h->cap *=2;
    free(array_old);
}
//Percolate Down
void PercolateDown(struct heap *h,int i)
{
    // printf("===");
    int l,r,max,temp;
    l=LeftChild(h,i);
    r=RightChild(h,i);
    if(l!=-1  &&  h->array[i]>h->array[i])
        max=l;
    else
        max=i;
    if(r!=-1 && h->array[r]>h->array[max])
        max=r;
    if(max!=i)
    {
        temp=h->array[i];
        h->array[i]=h->array[max];
        h->array[max]=temp;
    }
    PercolateDown(h,max);
}
int LeftChild(struct heap *h,int i)
{
    int left=2*i+1;
    if(left>=h->count)
        return(-1);
    return (left);
}
int RightChild(struct heap *h,int i)
{
    int right=2*i+2;        //============================
    if(right>=h->count)
        return (-1);
    return (right);
}
void HeapSort(int a[],int n)
{
    struct heap *h=createHeap(n);
    int old_size,i,temp;
    buildHeap(h,a,n);
    old_size=h->count;
    for(i=n-1;i>0;i--)
    {
        temp=h->array[0];
        h->array[0]=h->array[h->count-1];
        h->array[h->count-1]=temp;
        h->count--;
        PercolateDown(h,i);
    }
    h->count=old_size;
}
int main()
{
    int a[10]={5,9,3,4,2,8,1,7,6,0},n=10;
    printf("Hello, world!\n");

    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    HeapSort(a,n);
    printf("sorted array : \n");
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    
    return 0;
}