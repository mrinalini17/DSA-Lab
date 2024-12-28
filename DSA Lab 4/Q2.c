// C program to find m'th node from the last of a linked list of n nodes
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
    int n,i,m;
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
    printf("enter m:");
    scanf("%d",&m);
    y=p;
    for(i=1;i<(n+1-m);i++)
    {
        y=y->link;
    }
    printf("%d node from the last :%d",m,y->data);
    return 0;
}