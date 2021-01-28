// FINAL LINKED LIST
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int info;
    struct node *link;
};
struct node* create()
{
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number : ");
    scanf("%d",&(n->info));
    n->link=NULL;
    return n;
}
//=============================       Delete            ==========================================================
void delL(struct node **start)
{
    struct node* n;
    n=*start;
    *start=(*start)->link;
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
    if (n->link!=NULL)
        while ((n->link)->link!=NULL)
            n=n->link;
    free(n->link);
    n->link=NULL;
}

void delN(struct node **start,int x)
{
    struct node *n,*nlink;
    n=*start;
    if(*start==NULL)
    {
        printf("Sorry!\n");
        return ;
    }
    if(x==0)
    {
        *start=n->link;
        free(n);
    }
    for(int i=0;i<x-1;i++)
        n=n->link;
    nlink=n->link;
    n->link=nlink->link;
    free(nlink);
}
//=============================       ADD            ==========================================================
void addL(struct node** start)
{
    struct node*n;
    n=*start;
    *start=create();
    (*start)->link=n;
}

/*void addR(struct node** start)
{
    struct node* n;
    if(*start==NULL)
    {
        *start=create();
        return;
    }
    n=(*start);
    while(n->link!=NULL)
        n=n->link;
    n->link=create();
}*/

void addR(struct node** node)
{
    // struct node* n;
    // if(*start==NULL)
    // {
    //     *start=create();
    //     return;
    // }
    // n=(*start);
    while(*node!=NULL)
        node=&( (*node)->link);
    *node=create();
}

// void addN(struct node** start,int n)
// {
//     struct node *tmp,*prev;
//     if(*start==NULL)
//     {
//         printf("Sorry your linked list is empty.\n");
//         return;
//     }
//     tmp=*start;
//     if(n==0)
//     {
//         *start=create();
//         (*start)->link=tmp;
//     }
//     for(int i=0;i<n-1;i++)
//         tmp=tmp->link;
//     prev=tmp->link;
//     tmp->link=create();
//     (tmp->link)->link=prev;
// }


void addN(struct node** node,int n)
{
    struct node *prev;
    if(*node==NULL)
    {
        printf("Sorry your linked list is empty.\n");
        return;
    }
    if(n==0)
    {
        prev=*node;
        *node=create();
        (*node)->link=prev;
        return ;
    }
    for(int i=2;i<n && *node!=NULL ;i++)
        node=&((*node)->link);
    prev=(*node)->link;
    (*node)->link=create();
    ((*node)->link)->link=prev;
}
//=============================       READ            ==========================================================
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
        n=n->link;
    }while(n!=NULL);
}


int readN(struct node* n,int x)
{
    if(n==NULL)
    {
        printf("Sorry!\n");
        return 0;
    }
    for(int i=0;i<x;i++)
        n=n->link;
    return n->info;
}
// =========================================== Show ==============================

void show(struct node *n)
{
    int static count;
    int ln;
    if(n==NULL)
    {
        printf("Sorry!");
        return ;
    }
    while(n!=NULL)
    {
        ln=(int)n->link;
        printf("%d  %u\n",count++,ln);
        n=n->link;
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
            readN(start,n);
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
/*
addR
addL
addN

delR
delL
delN

read
readN
*/