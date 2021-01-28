
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
