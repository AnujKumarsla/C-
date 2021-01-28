#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int info;
    node *link;
}node;


node* create()
{
    node *p;
    p=(node *)malloc(sizeof(node));
    return p;
}

node* add(node* start)
{
    node *tmp,*n;
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
    
    node* start=NULL;
    printf("Hello, world!\n");
    
    return 0;
}