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
        printf("Sorry None of the element is exist in the heap\n===UndrFlow\n");
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
            printf("%d. %d\t%d. %d\n",index,(h->array[index]),index*2 +1,(h->array[index*2 +1]));
            index=index*2+1;
            }
            else
            {
                printf("Sorry Wrong Excess  1 %d node %d\n",test,index*2+1);
                break;
            }
            
        }
        else
        {
            if(index*2+2<=h->count)
            {
            swap(&(h->array[index]),&(h->array[index*2 +2]));
            printf("%d. %d\t%d. %d\n",index,(h->array[index]),index*2 +2,(h->array[index*2 +2]));
            index=index*2+2;
            }
            else
            {
                printf("Sorry Wrong Excess  2 %d node %d\n",test,index*2+2);
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
int main()
{
    int n=0;
    int choice;
    struct Heap *h;
    int x=10;
    h=createHeap(x);
    printf("Hello, world!\n");
    
    printf("1.Add Node\t2.Delete Node\t3.Show data\t4.show data on node\t5.Exit\n");
    printf("Enter the option : ");
    scanf("%d",&n);
    while(n)
    {
        switch (n)
        {
        case 1:
            for(int i=0;i<h->cap;i++)
            {
                printf("Enter the data : ");
                scanf("%d",&n);
                addNode(h,n);
            }
            break;
        case 2 :
            printf("Enter the index of the node : \n");
            scanf("%d",&n);
            n=deleteNode(h,n);
            printf("The deleted node's data : %d\n",n);
            break;
        case 3:
            printf("data==============\n");
            for(int i=0;i<=h->count;i++)
                printf("%d. %d\n",i,h->array[i]); 
            break;
        case 4:
            printf("Enter the index of the node : \n");
            scanf("%d",&n);
            printf("%d. %d\n",n,h->array[n]);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Sorry you Entered Wrong option!\n");
            break;
        }
        printf("Enter the option : ");
        scanf("%d",&n);
    }
    return 0;

}