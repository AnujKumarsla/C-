#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct Heap{
    int *array;
    int count;
    int capacity;
};
// int count=0;
int leftChild(struct Heap *h,int i);
int rightChild(struct Heap *h,int i);

struct Heap *CreateHeap(int capacity)
{
    struct Heap *h;
    h=(struct Heap *)malloc(sizeof(struct Heap));
    if(h==NULL)
    {
        printf("Memory Error!\n");
        return NULL;
    }
    h->count=0;
    h->capacity=capacity;
    h->array=(int *)malloc(sizeof(int)*h->capacity);
    if(h->array==NULL)
    {
        printf("Memory Error!\n");
        return NULL;
    }
    return h;
}
void PercolateDown(struct Heap *h,int i)
{
    // if(count++>100)
        // exit(0);
    int l,r,max,temp;
    l=leftChild(h,i);
    r=rightChild(h,i);
    // if(l==-1 || r==-1){
    // printf("Break i=%d l=%d | r= %d\n",i,l,r);
        // return ;}
    // printf("Con i=%d l=%d | r= %d\n",i,l,r);
    if(l!=-1  &&  h->array[l]>h->array[i])//=========================================
        max=l;
    else 
        max=i;
    if(r!=-1  &&  h->array[r]>h->array[max])
        max=r;
    if(max!=i)
    {
        temp=h->array[i];
        h->array[i]=h->array[max];
        h->array[max]=temp;
        return ;
    }
    PercolateDown(h,max);  //==================================================
    // for(int i=0;i<h->count;i++)
    //     printf("%d | ",h->array[i]);
    // printf("\n");
}
int leftChild(struct Heap *h,int i)
{
    int left=(2*i)+1;
    if(left>=h->count)
        return -1;
    return left;
}
int rightChild(struct Heap *h,int i)
{
    int right=(2*i)+2;
    if(right>=h->count)
        return -1;
    return right;
}
void ResizeHeap(struct Heap *h)
{
    int i;
    int *array_old=(int *)malloc(sizeof(int)*h->capacity*2);
    if(h->array==NULL)
    {
        printf("Memmory Error!\n");
        return ;
    }
    for(i=0;i<h->capacity;i++)
        h->array[i]=array_old[i];
    h->capacity *=2;
    free(array_old);
}
void BuildHeap(struct Heap *h,int a[],int n)
{
    int i;
    if(h==NULL)
        return ;
    while(n>h->capacity)
        ResizeHeap(h);
    for(i=0;i<n;i++)
        h->array[i]=a[i];
    h->count=n;
    for(i=(n-1)/2;i>=0;i--)
        PercolateDown(h,i);
}
void HeapSort(int a[],int n)
{
    struct Heap *h;
    h=CreateHeap(n);
    int old_size,i,temp;
    BuildHeap(h,a,n);
    old_size=h->count;
    for(i=n-1;i>0;i--)
    {
        temp=h->array[0];
        h->array[0]=h->array[h->count-1];
        h->array[h->count-1]=temp;
        // a[0]=temp;
        h->count--;
        PercolateDown(h,0);
    }
    h->count=old_size;
    for(i=0;i<h->count;i++)
       a[i]=h->array[i];

}
int main()
{
    int a[10]={5,9,3,4,2,8,1,7,6,0},n=10;
    // int a[10]={80,11,25,79,8,32,41},n=7;
    printf("Hello, world!\n");

    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    HeapSort(a,n);
    printf("sorted array : \n");
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    
    return 0;
}