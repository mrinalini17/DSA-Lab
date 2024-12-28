//WAP to display the contents of a single linked list in reverse order
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *p,*q,*y,*z,*x,*a;
    int n,i;
    printf("enter the number of nodes:");
    scanf("%d",&n);
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the value of node 1:");
    scanf("%d",&p->data);
    y=p;
    for(i=2;i<n+1;i++)
    {
      q=(struct node *)malloc(sizeof(struct node));
      printf("enter the value of node %d:",i);
    scanf("%d",&q->data);
      y->link=q;
      y=q;
    }
    y->link=NULL;
    y=p;
    while(y!=NULL)
    {
        printf("%d-->",y->data);
        y=y->link;
    }
    printf("NULL\n");
    
    x=y=p;
    a=0;
    while(y!=0)
    {
        y=y->link;
        x->link=a;
        a=x;
        x=y;
    }
    p=a;
    y=p;
    while(y!=NULL)
    {
        printf("%d-->",y->data);
        y=y->link;
        
    }
    printf("Null");
    return 0;
}