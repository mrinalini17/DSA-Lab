/*Write a menu driven program to perform the following operations in a double linked list by 
using suitable user defined functions for each case. a) Traverse the list forward, b) Traverse the 
list backward, c) Check if the list is empty d) Insert a node at the certain position (at beginning/end/
any position)e) Delete a node at the certain position (at beginning/end/any position)
f) Delete a node for the given key, g) Count the total number of nodes, h) Search for an element in 
the linked list.
Verify & validate each function from main method*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *rightlink;
    struct node *leftlink;
};
void traverse(struct node *a)
{
    struct node *b = a;
    while (b!= NULL)
    {
        printf("%d-->", b->data);
        b = b->rightlink;
    }
    printf("NULL\n");
}
void rev(struct node *p)
{
    struct node *b=p;
    while(b!=NULL)
    {
        printf("%d-->",b->data);
        b=b->leftlink;
    }
    printf("NULL\n");
}
void check(struct node *a)
{
    if(a==NULL)
    printf("List is empty\n");
    else
    printf("List is not empty\n");
}
void insert(struct node *a)
{
    struct node *b=a,*c,*d;
    int n,i=1;
    printf("At which position would you like to insert a node : ");
    scanf("%d",&n);
    a->leftlink=NULL;
    c=(struct node *)malloc(sizeof(struct node));
    printf("Enter data of node : ");
    scanf("%d",&c->data);
    while(b!=NULL&&i<n)
    {
		d=b;
        b=b->rightlink;
        i++;
		}
		d->rightlink=c;
        c->leftlink=d;
        c->rightlink=b;
        b->leftlink=c;
        b=a;
        while(b->rightlink!=NULL){
			printf("%d-->",b->data);
            b=b->rightlink;
			}
			printf("%d\n",b->data);
}
void delete(struct node *a)
{
    struct node *b=a,*c;
    int n,i=1;
    printf("From which position would you like to delete a node : ");
    scanf("%d",&n);
    while(b!=NULL&&i<n)
    {c=b;
    b=b->rightlink;
    i++;}
    c->rightlink=b->rightlink;
    b->rightlink->leftlink=c;
    b=a;
    while(b->rightlink!=NULL)
    {printf("%d-->",b->data);
    b=b->rightlink;}
    printf("%d\n",b->data);
}
void key(struct node *a)
{   
    struct node *b=a;
    int n;
    printf("Enter data of node you want to delete : ");
    scanf("%d",&n);
    while(b->rightlink!=NULL)
    {if(b->rightlink->data==n)
    b->rightlink=b->rightlink->rightlink;
    else
    b=b->rightlink;}
    b=a;
    while(b->rightlink!=NULL)
    {printf("%d-->",b->data);
    b=b->rightlink;}
    printf("%d\n",b->data);
}
void count(struct node *a)
{
    struct node *b=a;
    int i=1;
    while(b->rightlink!=NULL)
    {b=b->rightlink;
    i++;}
    printf("Total number of nodes = %d\n",i);
}
void search(struct node *a)
{
    struct node *b=a;
    int n,i=1;
    printf("Enter data of node you want to search : ");
    scanf("%d",&n);
    while(b->rightlink!=NULL)
    {if(b->data==n)
    {printf("Node found at position %d\n",i);}
    b=b->rightlink;
    i++;} 
}
int main()
{
    struct node *a,*b,*p;
    int n, i;
    printf("Enter number of nodes : ");
    scanf("%d", &n);
    a=(struct node *)malloc(sizeof(struct node));
    printf("Enter data of node 1 : ");
    scanf("%d", &a->data);
    b=a;
    b->leftlink=NULL;
    for(int i=2;i<=n;i++)
    {p=(struct node *)malloc(sizeof(struct node));
    printf("Enter data of node %d : ", i);
    scanf("%d", &p->data);
    b->rightlink = p;
    p->leftlink=b;
    b = p;}
    b->rightlink = NULL;
    int x;
    printf("Enter 1 to traverse the list\n");
    printf("Enter 2 to check if the list is empty\n");
    printf("Enter 3 to insert a node at the certain position\n");
    printf("Enter 4 to delete a node at the certain position\n");
    printf("Enter 5 to delete a node for the given key\n");
    printf("Enter 6 to count the total number of nodes\n");
    printf("Enter 7 to search for an element in the linked list\n");
    do
    {scanf("%d",&x);
    switch(x)
    {   case(1):traverse(a);
                break;
        case(2):check(a);
                break;
        case(3):insert(a);
                break;
        case(4):delete(a);
                break;
        case(5):key(a);
                break;
        case(6):count(a);
                break;
        case(7):search(a);
                break;
        case(8):exit(0);        
        default: printf("invalid input try again ");
    }}
    while(x!=8);
    return 0;
}