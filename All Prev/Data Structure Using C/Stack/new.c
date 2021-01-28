#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


struct arrStack
{
    int top,cap,*arr;
};
struct arrStack* create(int cap)
{
    struct arrStack *st;
    st=(struct arrStack *)malloc(sizeof(struct arrStack));
    st->top=-1;
    st->cap=cap;
    st->arr=(int *)calloc(cap,sizeof(int));
}
int isFull(struct arrStack *st)
{
    if(st->top==(st->cap-1))
        return 1;
    return 0;
}
int isEmpty(struct arrStack *st)
{
    if(st->top==-1)
        return 1;
    return 0;
}
int pop(struct arrStack *st)
{
    int value;
    if(isEmpty(st))
    {
        printf("UnderFlow!\n");
        return -1;
    }    
    value=st->arr[st->top];
    st->top--;
    return value;
    
}
void push(struct arrStack *st,int value)
{
    if(isFull(st))
    {
        printf("OverFlow!\n");
        return;
    }
    st->top++;
    st->arr[st->top]=value;
        
}
int main()
{
    struct arrStack *stack=NULL;
    int choice,n;
    printf("Hello, world!\n");
    printf("press \n1. create stack\n2. add value\n3. delete value\n4. exit\n");
    while (1)
    {
        printf("Enter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the size : ");
                scanf("%d",&n);
                stack=create(n);
                break;
            case 2:
                printf("Enter the value : ");
                scanf("%d",&n);
                push(stack,n);
                break;
            case 3:
                pop(stack);
                break;
            case 4:
                exit(0);
            default:
                printf("Sorry! you choose wrong option!\n");

        }
        
    }
    
    
    return 0;
}