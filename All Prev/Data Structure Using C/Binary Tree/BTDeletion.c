#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
/*
                              8
                             / \                                                                                                                                                              
                           4    12                                                            
                         /  \  /  \                                                              
                        2   6 10  14                                                                                                                                                      
8 4 2 6 12 10 14
*/

// Queue===================================================

struct Que{
    int front,end,cap;
    long int *arr;
};

struct Que * createQue(int cap)
{
    struct Que *Q;
    Q=(struct Que *)malloc(sizeof(struct Que));
    if(!Q)
        return NULL;
    Q->front=Q->end=-1;
    Q->arr=(long int *)malloc(sizeof(long int)*cap);
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

void inQue(struct Que *Q,long int data)
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
long int deQue(struct Que *Q)
{
    long int data=0;
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

void DeleteLQue(struct Que *Q)
{
    if(Q)
    {
        if(Q->arr)
            free(Q->arr);
        free(Q);
    }
}

// ==================================================
struct BTnode{
    int data;
    struct BTnode *left;
    struct BTnode *right;
};

struct BTnode *create(int level,char s,int num)
{
    static int count;
    struct BTnode *node;
    if(level==0)
        return NULL;
    node=(struct BTnode *)malloc(sizeof(struct BTnode));
    printf("node %c%d %d Enter the Data : ",s,3-level,num);
    scanf("%d",&(node->data));
    node->left=create(level-1,'L',num*2);
    node->right=create(level-1,'R',num*2+1);
    return node;
}

void preOrder(struct BTnode *node,int num)
{
    if(node)
    {
        printf("%d data : %d\n",num,node->data);
        preOrder(node->left,num*2);
        preOrder(node->right,num*2+1);
    }
}
void postOrder(struct BTnode *node,int num)
{
    if(node)
    {
        postOrder(node->left,num*2);
        postOrder(node->right,num*2+1);
        printf("%d data : %d\n",num,node->data);
    }
}
void inOrder(struct BTnode *node,int num)
{
    if(node)
    {
        inOrder(node->left,num*2);
        printf("%d data : %d\n",num,node->data);
        inOrder(node->right,num*2+1);
    }
}

void levelOrder(struct BTnode *root)
{
    struct BTnode *node;
    struct Que *Q;
    Q=createQue(15);
    if(!root)
        return ;
    inQue(Q,(long int)root);
    while (!isEmpty(Q))
    {
        node=(struct BTnode *)deQue(Q);
        printf("The data : %d\n",node->data);
        if(node->left)
            inQue(Q,(long int)node->left);
        if(node->right)
            inQue(Q,(long int)node->right);
    }
    DeleteLQue(Q);
}

void BTsearch(struct BTnode *root,int data,int num)
{
    printf("%d\t",num);
    if(root==NULL){
        printf("sorry data is not found!\n");
        return ;
    }
    if(data<root->data)
    {
        num=num*2;
        return BTsearch(root->left,data,num);

    }
    else if(data>root->data)
    {
        num=num*2+1;
        return BTsearch(root->right,data,num);
    }
    else
        printf("node no. : %d\n",num);
    
}

struct BTnode* Add(int data)
{
    struct BTnode *node;
    node=(struct BTnode *)malloc(sizeof(struct BTnode));
    node->data=data;
    node->left=node->right=NULL;
    return node;
}
void BSTinsert(struct BTnode *root,int data)
{
    char path[10]="";int i=0;
    struct BTnode *temp;
    struct BTnode **node=NULL;
    if(root==NULL){
        root=Add(data);
        return;
    }
    temp=root;
    while(temp)
    {
        if(data<temp->data)
        {
            path[i++]='L';
            node=&(temp->left);
            temp=temp->left;
        }
        else if(data>temp->data)
        {
            path[i++]='R';
            node=&(temp->right);
            temp=temp->right;
        }
        else
        {
            path[i++]='C';
            printf("Sorry this value is already inserted !\n");
            printf("path : %s\n",path);
            return;
        }
    }
    *node=Add(data);
    printf("path : %s\n",path);
}
// Most value
struct BTnode *FindMax(struct BTnode*root)
{
    if(root==NULL)
        return NULL;
    if(root->right==NULL)
        return root;
    return FindMax(root->right);
}
//Lest value
struct BTnode *FindMin(struct BTnode*root)
{
    if(root==NULL)
        return NULL;
    if(root->left==NULL)
        return root;
    return FindMin(root->left);

    // while(root->left!=NULL)
    //     root=root->left;
    // return root;
}
int test=0;
struct BTnode* DeleteL(struct BTnode *root,int data)
{
    struct BTnode *temp;
    if(root==NULL)
        printf("Sorry, No Such Element is Exist.\n");
    else if(data<root->data)
    {
        root->left=DeleteL(root->left,data);
        printf("1 ");
    }
    else if(data>root->data)
    {
        root->right=DeleteL(root->right,data);
        printf("2 ");
    }
    else
    {
        if(root->left && root->right)
        {
            printf("3 ");
            temp=FindMax(root->left);
            root->data=temp->data;
            root->left=DeleteL(root->left,temp->data);
        }
        else
        {
            printf("4 ");
            temp=root;
            if(root->left==NULL)
                root=root->right;
            else if(root->right==NULL)
                root=root->left;
            free(temp);
            printf("5 ");
        }
            printf("6 ");
    }
    return root; 
}
struct BTnode* DeleteR(struct BTnode *root,int data)
{
    struct BTnode *temp;
    if(root==NULL)
        printf("Sorry, No Such Element is Exist.\n");
    else if(data<root->data)
    {
        root->left=DeleteR(root->left,data);
        printf("1 ");
    }
    else if(data>root->data)
    {
        root->right=DeleteR(root->right,data);
        printf("2 ");
    }
    else
    {
        if(root->left && root->right)
        {
            printf("3 ");
            temp=FindMin(root->right);
            root->data=temp->data;
            root->right=DeleteR(root->right,temp->data);
        }
        else
        {
            printf("4 ");
            temp=root;
            if(root->left==NULL)
                root=root->right;
            else if(root->right==NULL)
                root=root->left;
            free(temp);
            printf("5 ");
        }
            printf("6 ");
    }
    return root; 
}
int main()
{
    int n=0;
    int choice;
    struct BTnode *root=NULL;
    printf("Hello, world!\n");
    root=create(3,'R',1);

    printf("1.PreOrder\t2.PostOrder\t3.InOrder\t4.LevelOrder\t5.Binary Search\t6.BT insert\n7.DeleteL Element\n");
    printf("Enter the option : ");
    scanf("%d",&choice);
    while(choice)
    {
        switch (choice)
        {
        case 1:
            printf("pre==============\n");
            preOrder(root,1);
            break;
        case 2 :
            printf("post==============\n");
            postOrder(root,1);
            break;
        case 3:
            printf("in==============\n");
            inOrder(root,1);
            break;
        case 4:
            printf("levelOrder==============\n");
            levelOrder(root);
            break;
        case 5:
            printf("Enter the number you want to search : ");
            scanf("%d",&n);
            BTsearch(root,n,1);
            break;
        case 6:
            printf("Enter the data : ");
            scanf("%d",&n);
            BSTinsert(root,n);
            break;
        case 7:
            printf("Enter the data To DeleteL : ");
            scanf("%d",&n);
            DeleteL(root,n);
            break;
        case 8:
            printf("Enter the data To DeleteL : ");
            scanf("%d",&n);
            DeleteR(root,n);
            break;
        default:
            printf("Sorry you Entered Wrong option!\n");
            break;
        }
        printf("Enter the option : ");
        scanf("%d",&choice);
    }
    return 0;

}