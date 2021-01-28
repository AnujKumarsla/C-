#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int info;
    struct node *prev,*next;
};

void createn(struct node** start,int no)
{
    struct node *p,*n;
    p=(struct node*)malloc(sizeof(struct node));
    p->prev=NULL;
    p->next=NULL;
    //start
    // *start=p;
    if(*start==NULL)
        *start=p;
    else
    {
        n=*start;
        while(n->next!=NULL)
            n=n->next;
        n->next=p;
    }
    
    //end
    printf("Enter the number : ");
    scanf("%d",&p->info);
    for(int i=1;i<no;i++)
    {
        n=(struct node*)malloc(sizeof(struct node));
        printf("Enter the number : ");
        scanf("%d",&n->info);
        n->prev=p;
        p->next=n;
        n->next=NULL;
        p=n;
    }
}

void add(struct node** start)
{
    struct node *n,*new;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the number : ");
    scanf("%d",&new->info);
    new->next=NULL;
    if(*start==NULL)
    {
        new->prev=NULL;
        *start=new;
        return;
    }
    else
    {
        n=*start;
        while(n->next!=NULL)
            n=n->next;
        n->next=new;
        new->prev=n;
    }
}
void show(struct node* start)
{
    struct node* x;
    x=start;
    while (x->next!=NULL)
    {
        printf("%d\n",x->info);
        x=x->next;
    }
    printf("%d\n",x->info);
    
}

int main()
{
    struct node* start=NULL;
    int n=0;
    printf("Enter the length of the doubly linked list : ");
    scanf("%d",&n);
    createn(&start,n);
    show(start);
    add(&start);
    show(start);
    printf("Hello, world!\n");
    
    return 0;
}