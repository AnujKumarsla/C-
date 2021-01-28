#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct Que{
    int front,end,cap;
    int *arr;
};

struct Que * create(int cap)
{
    struct Que *Q;
    Q=(struct Que *)malloc(sizeof(struct Que));
    if(!Q)
        return NULL;
    Q->front=Q->end=-1;
    Q->arr=(int *)malloc(sizeof(int)*cap);
    if(!Q->arr)
        return NULL;
    Q->cap=cap;
    return Q;
}

int isEmpty(struct Que * Q)
{
    if(Q->front==-1)
        return 1;
    return 0;
}

int isFull(struct Que * Q)
{
    if((Q->end+1)%Q->cap==Q->front)
        return 1;
    return 0;
}

int queSize(struct Que * Q)
{
    return ((Q->cap-Q->front+Q->end+1)%Q->cap);
}

void inQue(struct Que *Q,int data)
{
    if(isFull(Q))
    {
        printf("OverFlow!\n");
        return;
    }
    else
    {
        Q->end=(Q->end+1)%Q->cap;
        Q->arr[Q->end]=data;
        if(Q->front==-1)
            Q->front=Q->end;
    }
}

//Deletion of Que Element 
int deQue(struct Que *Q)
{
    int data=0;
    if(isEmpty(Q))
    {
        printf("UnderFlow!\n");
        return -1;
    }
    else
    {
        data=Q->arr[Q->front];
        if(Q->front==Q->end)
            Q->front=Q->end=-1;
        else
        {
            Q->front=(Q->front+1)%Q->cap;
        }
            return data;
    }
}

// Deletion of Que

void deleteQue(struct Que *Q)
{
    if(Q)
    {
        if(Q->arr)
            free(Q->arr);
        free(Q);
    }
}

int main()
{
    int n;
    struct Que *Q=NULL;
        printf("1.Create Queue\n2.IsEmpty\n3.IsFull\n4.Queue size\n5.Insert the element\n6.Delete element\n7.Delete Queue\n");
        printf("8.Exit\n");
    while(1)
    {
        printf("Enter Your Choice : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: 
                printf("Enter the capacity of the Que : ");
                scanf("%d",&n);
                Q=create(n);
                break;
            case 2: 
                printf("Is empty : %d\n",isEmpty(Q));
                break;
            case 3: 
                printf("Is Full : %d\n",isFull(Q));
                break;
            case 4: 
                printf("Queue Size : %d\n",queSize(Q));
                break;
            case 5: 
                printf("Enter the Value of the element : ");
                scanf("%d",&n);
                inQue(Q,n);
                break;
            case 6: 
                deQue(Q);
                break;
            case 7: 
                deleteQue(Q);
                break;
            case 8: 
                exit(0);
                break;
            default: 
                printf("Sorry You choose Inappropriate Option.\n");
        }
    }    
    return 0;
}