#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct Heap{
    int cap;
    int *array;
    int count;
};
struct Heap* createHeap(int cap)
{
    struct Heap* h;
    h=(struct Heap *)malloc(sizeof(struct Heap));
    if(h==NULL)
    {
        printf("Sorry Memory Error!");
        return NULL;
    }
    h->array=(int *)malloc(sizeof(int)*cap);
    if(h->array==NULL)
    {
        printf("Sorry Memory Error!");
        free(h);
        return NULL;
    }
    h->cap=cap;
    h->count=-1;
    return h;
}
void addNode(struct Heap *h,int data)
{
    int i;
    h->count++;
    i=h->count;
    if(h->count>=h->cap)
    {
        printf("Sorry heap is fully filled \n");
        return ;
    }
    if(i>0)
        // while(h->array[(i-1)/2]>1data)// it creates Min Heap
        while(h->array[(i-1)/2]<data)// it creates Max Heap
        {   //if(h->array[(i-1)/2]<data)
            h->array[i]=h->array[(i-1)/2];
            i=(i-1)/2;
            if(i==0)
                break;
        }
    h->array[i]=data;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int deleteNode(struct Heap *h,int index)
{
    int test=0;
    int data;
    int temp;
    int last=h->count--;
    if(last<0)
    {
        // printf("Sorry None of the element is exist in the heap\n===UndrFlow\n");
        return -1;
    }
    data=h->array[index];// deleted node's data is saved in data variable
    h->array[index]=h->array[last];//Replace (deleted node with last node )
    h->array[last]=0;// Last node is deleted
    // Loop runs till the deleted node value is greater than its both the child value
    // Loop stops when both child is smaller than its parent value

    while(  (h->array[index]<h->array[index*2 +1])  ||  (h->array[index]<h->array[index*2 +2])  )
    {
        if(h->array[index*2 +1]>h->array[index*2 +2])
        {
            if(index*2+1<=h->count)
            {
            swap(&(h->array[index]),&(h->array[index*2 +1]));
            // printf("%d. %d\t%d. %d\n",index,(h->array[index]),index*2 +1,(h->array[index*2 +1]));
            index=index*2+1;
            }
            else
            {
                // printf("Sorry Wrong Excess  1 %d node %d\n",test,index*2+1);
                break;
            }
            
        }
        else
        {
            if(index*2+2<=h->count)
            {
            swap(&(h->array[index]),&(h->array[index*2 +2]));
            // printf("%d. %d\t%d. %d\n",index,(h->array[index]),index*2 +2,(h->array[index*2 +2]));
            index=index*2+2;
            }
            else
            {
                // printf("Sorry Wrong Excess  2 %d node %d\n",test,index*2+2);
                break;
            }
        }
        test++;
        // if(index*2+1>h->count || index*2+2>h->count)
        //     break;
    }
    return data;
    // IF  (h->array[index]>h->array[index*2 +1])  ||  (h->array[index]>h->array[index*2 +2])
}
void HeapSort(int a[],int n)
{
    struct Heap *h=createHeap(n);
    int old_size,i,temp;
    for(i=0;i<n;i++)
        addNode(h,a[i]);
    old_size=h->count;

    for(i=0;i<n;i++)
    {
        temp=deleteNode(h,0);
        a[i]=temp;
    }
    free(h);
}
int main()
{
    // int a[10]={5,9,3,4,2,8,1,7,6,0},n=10;
    int a[10]={80,11,25,79,8,32,41},n=7;

    printf("Hello, world!\n");

    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    HeapSort(a,n);
    printf("sorted array : \n");
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
    
    return 0;
}