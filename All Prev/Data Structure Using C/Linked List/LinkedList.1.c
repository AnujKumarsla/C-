/*
    create-n element initialisation
    add-single element
    show-shows all elements
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

    struct node* start=NULL;
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

void add()
{
    struct node *tmp,*n;
    tmp=create();

    //add value to the node
    printf("Enter the number : ");
    scanf("%d",&tmp->info);

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

void show()
{
    struct node *tmp;
    tmp=start;
    if(start==NULL){
        printf("Linked list is empty.");
        exit(0);
        }
    while(tmp->link!= NULL)
    {
        printf("%d\n",tmp->info);
        tmp=tmp->link;
    }
    if(tmp!=start)
        printf("%d\n",tmp->info);
    

}
int main()
{
    
    printf("Hello, world!\n");
    printf("%u\n",start);
    // for(int i=0;i<3;i++)
    // {
    //     add();
    //     printf("%lu\n",start);

    // }
    show();
    return 0;
}