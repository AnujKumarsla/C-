/*
    Access -a random number
    delete- nth element
*/
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
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->link=NULL;
    return p;
}

void add(struct node **start)
{
    struct node *tmp,*n;
    tmp=create();

    //add value to the node
    printf("Enter the number : ");
    scanf("%d",&tmp->info);

    if(*start==NULL)
        *start=tmp;
    else
    {
        n=*start;
        while (n->link!=NULL)
            n=n->link;
        n->link=tmp;
    }
    
}

void show(struct node **start)
{
    int static count;
    struct node *tmp;
    tmp=*start;
    if(*start==NULL){
        printf("Linked list is empty.\n");
        exit(0);
        }
    while(tmp!= NULL)
    {
        printf("%d. %d\n",++count,tmp->info);
        tmp=tmp->link;
    }
}

void delete(struct node ** start,int n)
{
    struct node ** ptlink;
    struct node *ptnode;
    if(*start ==NULL)
        printf("Sorry linked list is empty.\n");
    else
    {
        ptlink=start;
        ptnode=*start;
        for(int i=0;i<n;i++)
        {
            ptlink=&(ptnode->link);
            ptnode=ptnode->link;
            if(ptnode==NULL){
                printf("Sorry index is larger than the length of linked list.\n");
                return;
            }
        }
        *ptlink=ptnode->link;
        free(ptnode);
    }
    
}

struct node* axs(struct node *start,int n)
{
    struct node * nd;
    nd=start;
    if(start==NULL)
        printf("Sorry linked list is empty.\n");
    for(int i=0;i<n;i++)
    {
        if(nd==NULL)
            printf("Sorry indexed node is not exist.\n");
        nd=nd->link;
    }
    return nd;
}
int main()
{
    struct node* start=NULL;    
    int choice;
    int n;
    printf("1. create new linked list\n2. Add new items\n3. Access items\n4. Delete Items\n5. Show linked list\n6.Exit\n");
    scanf("%d",&choice);
    while(choice!=7)
    {
        switch (choice)
        {
        case 1:
            printf("Enter the length of the linked list : ");
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
                add(&start);
            }
            break;
        case 2:
                add(&start);
            break;
        case 3:
            printf("Enter the node index you want to acces : ");
            scanf("%d",&n);
            printf("%d. %d",n,(axs(start,n)->info));
            break;
        case 4:
            printf("delete a node no. : ");
            scanf("%d",&n);
            delete(&start,n);
            break;
        case 5:
            show(&start);
            break;
        case 6:
            exit(0);
            break;
        
        default:
            printf("Sorry You entered Wrong choice.\n");
        }

        // printf("1. create new linked list\n2. Add new items\n3. delete items\n4. Delete Items\n5. Show linked list\n6. Access items\n7. Exit\n");
        scanf("%d",&choice);
    }

    return 0;
}