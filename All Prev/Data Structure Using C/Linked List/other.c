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
    return p;
}

struct node* add(struct node* start)
{
    struct node *tmp,*n;
    tmp=create();

    if(start==NULL)
        start=tmp;
    else
    {
        n=start;
        while (n->link!=NULL)
            n=n->link;
        n->link=tmp;
    }
    
}
int main()
{
    
    struct node* start=NULL;
    printf("Hello, world!\n");
    
    return 0;
}