/*WAP to create a circular double linked list of n nodes and display the linked list by
using suitable user defined functions for create and display operations.*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void create(struct node *head, int n)
{
    struct node *y, *p;
    int i;
    y = head;
    for (i = 2; i <= n; i++)
    {
        printf("Enter the value of node %d: ", i);
        p = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        y->next = p;
        p->prev = y;
        y = p;
    }
    y->next = head;
    head->prev = y;
}
void traverse(struct node *head)
{
    struct node *y;
    y = head;
    while (y->next != head)
    {
        printf("%d-->", y->data);
        y = y->next;
    }
    printf("%d", y->data);
}
int main()
{
    struct node *x;
    int m;
    printf("Enter number of nodes ");
    scanf("%d", &m);
    x=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value of node 1: ");
    scanf("%d", &x->data);
    create(x, m);
    traverse(x);
}