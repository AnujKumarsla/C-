//  FINAL DOUBLY LINKED LIST
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int info;
    struct node *prev,*next;
};

struct node * create()
{
    struct node * n;
    n=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value : ");
    scanf("%d",&(n->info));
    n->prev=NULL;
    n->next=NULL;
    return n;
}
// =================================== ADD  ===========================================
void addL(struct node **start)
{
    struct node*n;
    n=create();
    n->next=(*start);
    if(*start!=NULL)
        (*start)->prev=n;
    *start=n;
}

void addR(struct node **start)
{
    struct node *n,*x,*new;
    new=create();
    if(*start==NULL)
    {
        *start=new;
        return;
    }
    n=(*start);
/*
last second : 
    if(n->next==NULL)
    {
        n->next=new;
        new->prev=n;
        return;
    }
    while((n->next)->next!=NULL)
        n=n->next;
    x=n->next;

    n->next=new;
    new->prev=n;

    new->next=x;
    x->prev=new;
*/
    while((n->next)!=NULL)
        n=n->next;

    n->next=new;
    new->prev=n;
}

void addN(struct node **start,int num)
{
    struct node *n,*x,*new;
    new=create();
    if(*start==NULL)
    {
        *start=new;
        return;
    }
    n=(*start);
    if(num<1)
    {
        *start=new;
        (*start)->next=n;
        n->prev=(*start);
        return;
    }//(n->next)->next!=NULL
    for(int i=1;i<num&&n->next!=NULL;i++)
        n=n->next;
    if(n->next==NULL)
    {
        n->next=new;
        new->prev=n;
        return;
    }
    x=n->next;
    n->next=new;
    (n->next)->prev=n;

    (n->next)->next=x;
    if(x==NULL)
        x->prev=n->next;
}
// =================================== Delete  ===========================================

void delL(struct node ** start)
{
    struct node *n;
    n=*start;
    if(*start==NULL)
    {
        printf("Sorry!\n");
        return ;
    }
    *start=(*start)->next;
    (*start)->prev=NULL;
    free(n);
}

void delR(struct node **start)
{
    struct node *n;
    if(*start==NULL)
    {
        printf("Sorry!\n");
        return ;
    }
    n=*start;
    if(n->next==NULL)
    {
        free(n);
        *start=NULL;
        return ;
    }
    while ((n->next)->next!=NULL)
        n=n->next;
    free(n->next);
    n->next=NULL;
    
}

void delN(struct node**start,int num)
{
    struct node *n,*x;
    n=*start;
    if(*start==NULL)
    {
        printf("Sorry!\n");
        return ;
    }
    if(num<1)
    {
        if(n->next==NULL)
        {
            *start=NULL;
            free(n);
        }
        else
        {
            *start=n->next;
            (*start)->prev=NULL;
            free(n);
        }
    }
    for(int i=1;i<num && (n->next)->next!=NULL;i++)
        n=n->next;
    
    x=n->next;
    n->next=x->next;
    if(n->next!=NULL)
        (n->next)->prev=n;
    free(x);
}
//=================================== READ  =================================== 
void read(struct node* n)
{
    if(n==NULL)
    {
        printf("Sorry!\n");
        return ;
    }
    do
    {
        printf("%d\n",n->info);
        n=n->next;
    }while(n!=NULL);
}

int readN(struct node* n,int x)
{
    if(n==NULL)
    {
        printf("Sorry!\n");
        return 0;
    }
    for(int i=0;i<x && n->next!=NULL;i++)
        n=n->next;
    return n->info;
}
// =========================================== Show ==============================

void show(struct node *n)
{
    int static count;
    int p,nx;
    if(n==NULL)
    {
        printf("Sorry!");
        return ;
    }
    while(n!=NULL)
    {
        p=(int)n->prev;
        nx=(int)n->next;
        printf("%d  %u %u\n",count++,p%1000,nx%1000);
        n=n->next;
    }
}

int main()
{
    struct node *start=NULL;
    int choice,n;
    printf("1.Add item (Last)\n2.Add item (First)\n3.Add item (index)\n4.Delete item(Last)\n5.Delete item(first)\n6.Delete item(index)\n");
    printf("7.Read\n8.Read(index)\n9.show addresses\n10. Exit\n\t:");
    scanf("%d",&choice);
    while(1)
    {
        switch (choice)
        {
        case 1:
            addR(&start);
            break;
        case 2:
            addL(&start);
            break;
        case 3:
            printf("Enter the index : ");
            scanf("%d",&n);
            addN(&start,n);
            break;

        case 4:
            delR(&start);
            break;
        case 5: 
            delL(&start);
            break;
        case 6:
            printf("Enter the index : ");
            scanf("%d",&n);
            delN(&start,n);
            break;
        
        case 7: 
            read(start);
            break;
        case 8:
            printf("Enter the index : ");
            scanf("%d",&n);
            n=readN(start,n);
            printf("%d",n);
            break;

        case 9:
            show(start);
            break;

        case 10:
            exit(0);


        default:
            printf("Sorry! You choose wrong option\n");
        }
        printf("\t:");
        scanf("%d",&choice);
    }
    return 0;
}